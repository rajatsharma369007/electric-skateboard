#define bluetooth Serial
#include <Servo.h>
Servo myServo;   

char cmd[100];    //for storing the character sent one byte via HC05
int cmdIndex;     
int led = 5;      //for headlamps


// executing the speed control and led control
void exeCmd() {
  // for led control, here led0 and led 1 are the assigned id
  if(strcmp(cmd, "led 0")==0) digitalWrite(led, LOW);
  if(strcmp(cmd, "led 1")==0) digitalWrite(led, HIGH);
  
  //for speed control, here x is id assigned in the app
  if(cmd[0]=='x' && cmd[1]==' ') {
    
    // value starts at cmd[2]
    // atof converts string to float
    
    float val = atof(cmd+2);
    // val ranging from -255 to 255
    val = val*2;
    
    int servoMicroseconds = 1500+val;
    
    myServo.writeMicroseconds(servoMicroseconds);   // values ranging from 1000 to 2000   
  }   
}



void setup() {
  bluetooth.begin(9600); // Bluetooth default baud is 115200
  
  myServo.attach(4, 1000, 2000);  // ESC input connected at pin 4
  cmdIndex = 0;       
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

