/*
 * Program to blink on board LEDs, LED1 and LED2
 * at an interval of 1 second
*/
#define F_CPU 16000000

#include <avr/io.h>
#include <util/delay.h>

int main()
{
  DDRD |= (1<<PD4) | (1<<PD5);

  while (1) {
    
    PORTD |= (1<<PD4); //LED1 On
    PORTD &= ~(1<<PD5); //LED2 Off

    _delay_ms(1000);

    PORTD |= (1<<PD5); //LED2 On
    PORTD &= ~(1<<PD4); //LED1 Off

    _delay_ms(1000);
    
  }
}
