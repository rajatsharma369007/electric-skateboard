// Control servo motor with phone's accelerometer using RoboRemo app
// www.roboremo.com

// Hardware setup:
// BT module   Arduino
// GND ------- GND
// VCC ------- 5V
// TX-O ------ pin0
// RX-I ------ pin1

// Servo       Arduino
// GND ------- GND
// VCC ------- VCC
// signal ---- pin4

#define bluetooth Serial
#include <Servo.h>

Servo myServo;

char cmd[100];
int cmdIndex;
int led = 5;


void exeCmd() {

  if(strcmp(cmd, "led 0")==0) digitalWrite(led, LOW);
  if(strcmp(cmd, "led 1")==0) digitalWrite(led, HIGH);
  
  if(cmd[0]=='x' && cmd[1]==' ') {
    
    // value starts at cmd[2]
    // atof converts string to float
    
    float val = atof(cmd+2);
    
   
    val = val*2;
    
    int servoMicroseconds = 1500+val;
    
    myServo.writeMicroseconds(servoMicroseconds);      
  }   
}



void setup() {
  
  delay(500); // wait for bluetooth module to start

  bluetooth.begin(9600); // Bluetooth default baud is 115200
  
  myServo.attach(4, 1000, 2000);
  
  cmdIndex = 0;

  delay(250);

pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  
}


void loop() {
  
  if(bluetooth.available()) {
    
    char c = (char)bluetooth.read();
    
    if(c=='\n') {
      cmd[cmdIndex] = 0;
      exeCmd();  // execute the command
      cmdIndex = 0; // reset the cmdIndex
    } else {      
      cmd[cmdIndex] = c;
      if(cmdIndex<99) cmdIndex++;
    }
   
    
  }
  
}

