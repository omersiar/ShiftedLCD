= ShiftedLCD Library for Arduino =

Allows communication via SPI Bus with alphanumerical liquid crystal displays (LCDs). 
This library works with LCD displays that are modified to use 595 Shift Register (in this case 74HC595) pin compatible. 
You can easily add Shift Register to your LCD. Please refer below link for pinouts and modifing your LCD.

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


== License ==

Copyright (C) 2006-2008 Hans-Christoph Steiner. All rights reserved.
Copyright (c) 2010 Arduino LLC. All right reserved.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
