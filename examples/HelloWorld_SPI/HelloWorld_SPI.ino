/*
  ShiftedLCD Library - Hello World
 
 Demonstrates the use a 16x2 LCD display with SPI Shift Register.
 Library works with LCD displays that are modified to use 
 595 Shift Register (in this case 74HC595) pin compatible.
 
 This sketch prints "Hello World!" to the LCD
 and shows the time.
 
 You can easily add Shift Register to your LCD
 Please refer below link for pinouts and modifing your LCD

 https://github.com/omersiar/ShiftedLCD

 
 Library originally added 18 Apr 2008
 by David A. Mellis
 library modified 5 Jul 2009
 by Limor Fried (http://www.ladyada.net)
 example added 9 Jul 2009
 by Tom Igoe
 modified 22 Nov 2010
 by Tom Igoe
 modified 12 Feb 2012
 by Juan Hernandez
 modified 16 Nov 2016
 by Ömer Şiar Baysal
 
 This example code is in the public domain.
 */

// include the library code:
#include <ShiftedLCD.h>
#include <SPI.h>

// initialize the library with the number of the sspin 
// (or the latch pin of the 74HC595)
LiquidCrystal lcd(8);

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis()/1000);
}
