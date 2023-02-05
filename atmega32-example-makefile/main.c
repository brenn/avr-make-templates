#include <avr/io.h>
#include <util/delay.h>

#define bit_set(p,m) ((p) |= _BV(m))
#define bit_clear(p,m) ((p) &= ~_BV(m))

int main(void)
{
	bit_set(DDRB, PB0);

	for (;;) {
		_delay_ms(1000);
		bit_clear(PORTB, PB0);
		_delay_ms(1000);
		bit_set(PORTB, PB0);
	}
	return -1;
}

