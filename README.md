Electric Skateboard Controlled via Android Phone

This was a personal project which I started around March,2016 and completed the prototype on July,2016. The Working model (version 1) was completed on September,2016 which I demonstrated in TechExpo, IIT Guwahati and Missamari Military Exhibition in Assam. This Electric Skateboard which can achieve a speed of Max. 40 km/hr and can be controllable via Android phone.  

Version 1 looks like this  

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/2.jpg)

Version 2 looks like this  

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/1.JPG)

Technologies : Arduino Programming, Serial Communication via Bluetooth
Electronics  : Arduino, HC05 bluetooth module, CPU cooling fan 12V, ESC 120Amp 30V, Brushless motor 2400W 270KV 30V, 2 x Lithium polymer battery 2800mah 11.1V 30C, LED lights
Others : Skateboard, Skateboard wheels >63mm size, some plywood, Sprockets, Drive chain  

Here, I will not discuss the mechanical aspect of building the skateboard. I will just describe how to setup the circuit and how to  connect the android device with skateboard.  

Below is the circuit diagram ( Task for you to complete and test the circuit, code provided in folder is for controlling the motor with the android phone )

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/circuit/circuit.png)  

LINK to the testing of circuit : https://youtu.be/JgSlK44TqP0  

After setting up the circuit   
Now, Download the app "ROBOREMO" from playstore and configure the app by following the instructions.  

1. First, open the app and go to the MENU section

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/1.png)  

2. Then, go to EDIT UI  

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/2.png)  

3. Click on the middle portion of the screen

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/3.png)   

4. Select the SLIDER  

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/4.png)  

5. Now, a slider will appear on screen, drag the corner to adjust the slider to look same as given in figure. Now, click on middle of slider to configure.  

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/5.png)  

6. Select the SET ID  

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/6.png)  

7. now, set id as X

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/7.png)  

8. Now, click on SET MIN, MAX

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/8.png)  

9. set the min as -255 and max as 255

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/9.png)  

10. click on SEND WHEN MOVED

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/10.png) 

11. Now, go back and click on the clear region (area other than the slider occupied)

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/12.png)  

12. click on BUTTON

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/13.png)  

13. a button will appear, now click on button to configure

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/14.png)  

14. Click on SET PRESS ACTION

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/15.png) 

15. set it as led 0

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/16.png)   

16. now, go back and add one more button as previous one  

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/19.png)  

17. set it's press action as led 1

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/21.png)  

18. now, go back to the main screen and press the back button once, it will look like this

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/22.png) 

19. Now click on MENU and select CONNECT --> select BLUETOOTH --> select device "HC-05" --> select port 1  

NOTE: before doing step 19 , first pair up with the bluetooth module using pin "1234 or 0000". After pairing, do the step 19.
here i have added two leds at the front-side of the skateboard.

LINK to the Video for :  
RUN-TEST : https://www.youtube.com/watch?v=zU_2Fe9UbHg  

NEW-MODEL: https://www.youtube.com/watch?v=f_LaNBuB7ik

Here, i am at Techexpo, IIT Guwahati  

![alt text](https://github.com/rajatsharma369007/Electric-skateboard/blob/master/images/IMG_20160903_213722_540.jpg)  

Thank you for visiting here,  
Rajat Sharma  
Bachelor in Technology (2015-2019)  
Computer Science and Engineering  
Tezpur University  

Feel free to contact at  
Email: rajatsharma369007@gmail.com  
LinkedIn: https://www.linkedin.com/in/rajat-sharma-1144a1119/  
