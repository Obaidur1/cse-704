#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	unsigned int x=100;
	DDRA &= ~(1<<1);
	PORTA = 0x02;
	PORTC = 0xFF;
	while (1)
	{
		if ((PINA&(1<<1))==0)
		{
			PORTC=0x66;
			_delay_ms(x);
			PORTC = 0xCC;
			_delay_ms(x);
			PORTC = 0x99;
			_delay_ms(x);
			PORTC = 0x33;
			_delay_ms(x);
		}
		else{
			PORTC = 0x66;
			_delay_ms(x);
			PORTC = 0x33;
			_delay_ms(x);
			PORTC = 0x99;
			_delay_ms(x);
			PORTC = 0xCC;
			_delay_ms(x);
		}
	}
	return 0;
}
