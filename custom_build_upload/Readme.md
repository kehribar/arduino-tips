	
#Blinky on an Arduino without Arduino IDE  

##Requirements  
   * Install WinAVR for Windows environment  
      * http://winavr.sourfource.org  
   * 'sudo apt-get install arduino' for Linux. You may also separately install avr-gcc, avrdude, avr-libc, etc. manually  
   * Install CrossPack for Mac environment 
      * http://www.obdev.at/products/crosspack/index.html

##Makefile commands  
   * make  
      * compiles the code  
   * make upload   
      * uploads your code to the board  
   * make reset  
      * resets the board  
   * make clean  
      * deletes previously generated files  

##Notes
   * You have to edit the PORT variable in the Makefile according to your computer  
   * This spesific example is applied to Arduino Uno  
   * Refer to Atmega PinMapping for converting standard Arduino pin numbers to actual chip pin names  
      http://www.arduino.cc/en/Hacking/PinMapping  

  