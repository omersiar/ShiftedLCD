# ShiftedLCD
Arduino Library for 74HC595 Shift Register using SPI

I had a spare 1602 LCD that laying around for a long time,
Bare LCD that you can connect it to your Arduino in parallel.
I wanted to reduce used pins, and I have already working on
my other project featuring SPI bus, it was good practice to
use them together on SPI bus. Old Libraries that supports 
Register Shift IC did not satisfied my needs. So I forked
Juan Hernandez's (juanh0238) work, and this Library was born.

This is only SPI library, 
no other bus (I2C or 1Wire, etc) is supported.

Thanks Stan from 42bots.com for 
great, clean article and illustration.
http://42bots.com/author/spd42/
http://42bots.com/tutorials/arduino-controlled-lcd-using-a-shift-register-and-the-spi-library/

![alt text][logo]

[logo]: http://42bots.com/wp-content/uploads/2013/12/arduino-lcd-liquidcrystal-spi-connections-v3.png "Wiring"

What Works

* It seems we can use all LiquidCrystal commands
* Hello World Example
* Concurrent SPI slaves


TODO

[X] Simple breadboard illustration (fritzing)
[X] Arduino IDE 1.6 modern Library Import Support (online)

[] Bug Fixes



