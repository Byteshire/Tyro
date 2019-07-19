# Tyro
Atmega32 based development board for makers and professionals!

# Features
* Atmega328
  * 16 MHz
  * 32 Kbytes Flash
  * 1 Kbyte EEPROM
  * 2 Kbyte SRAM
  * GPIOs
  * ADCs
  * UART
  * I2C
  * SPI
* On board Programmer
* 16x2 LCD
  * HDD448780U based 16x2 LCD in 4 bit mode
* LM35 Analogue Temperature Sensor
* Push Buttons
* Relay
* 5v and 3.3V Pins  
Aparat from above, Tyro is hihgly flexible and external modules can be easily interfaced with just a switch of on board jumpers.

# Linux Toolchain for AVR development

To set up the tool chain on a linux machine, issue the following commnad  
`sudo apt-get install gcc-avr binutils-avr gdb-avr avr-libc avrdude`  
The same packages can be installed with the respective package managers on other linux distros.  
You can use any IDE of you choice or no IDE at all!  

# Windows Toolchain and IDE setup
For windows microchip has a IDE which can be used for the development of AVR on windows platform.  
AVR Studio can be found here : [AVR Studio](https://www.microchip.com/mplab/avr-support/atmel-studio-7)

