#include <avr/io.h>
#define F_CPU 8000000
#include <util/delay.h>
int main()
{
int8_t i, k, m;
unsigned char liczba_LED[10] = {
		  0x3F,	// 0
			0x06,	// 1
			0x5B,	// 2
			0x4F,	// 3
			0x66,	// 4
			0x6D,	// 5
			0x7D,	// 6
			0x27,	// 7
			0x7F,	// 8
			0x6F,	// 9
			};

//ustaw kierunki transmisji
DDRB = 0xFF;
DDRC = 0xFF;
for(;;)
{
for(i=0; i<=9; i++)
for(k=0; k<=9; k++)
for(m=1; m<=10; m++)
{
PORTC = 0x01;
PORTB = liczba_LED[k];
_delay_ms(5);
PORTC = 0x02;
PORTB = liczba_LED[i];
_delay_ms(5);
}
}
return 0;
}
