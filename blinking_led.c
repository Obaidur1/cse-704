#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>
int main(void)
{
    DDRC = 0xFF;
    while(1)
    {
        PORTC = 0XFF;
        _delay_ms(100);
        PORTC = 0x00;
        _delay_ms(100);
    }
}


// required ATMEGA16 AVR Microcontroller board and LED