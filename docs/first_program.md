Once the toolchain is set up for your operating system, you are ready to write your first code and test the board.

# Edit
Open any text editor and type in the following

```
#include <avr/io.h
#include <util/delay.h>

int main()
{
  DDRC |= 1 <<PC2;
  while(1) {
    PORTC &= ~(1<<PC2);
    _delay_ms(1000);
    PORTC |= (1<<PC2)
    _delay_ms(1000);
  }
}



```
Save the file with name **blinky.c**  

# Compile 
To compile the above code, open the terminal and navigate to the directory where the code is save and issue the follwoing command  
` avr-gcc -mmcu=atmega328 Os blinky.c -o blinky.o`  
and then  
` avr-objcopy -j .text -j .data -O ihex blinky.o blinky.hex`  

# Upload
Use the following command to upload the code to the microcontroller  
`avrdude -c usbasp -p atmega328 -U flash:w:blinky.hex`
