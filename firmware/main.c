#include <avr/interrupt.h>
#include <avr/io.h>
#include <stdbool.h>

static volatile bool up_t0 = false;
static volatile bool up_t1 = false;
static volatile uint8_t counter = 0;
static volatile uint8_t top = 0;

ISR(TIMER0_COMPA_vect)
{
    OCR1B = up_t1 ? counter++ : 0xff - counter++;
    if (counter == 0) {
        up_t1 = !up_t1;
        OCR0A = 10 + (up_t0 ? top++ : 0xf - top++);
        if (top == 0xf) {
            up_t0 = !up_t0;
            top = 0;
        }
    }
}

int
main(void)
{
    DDRB = (1 << PB3) | (1 << PB4);

    TCCR0A = (1 << WGM01);
    TCCR0B = (1 << CS02) | (1 << CS00);
    TIMSK = (1 << OCIE0A);
    OCR0A = top;

    TCCR1 = (1 << CS13);
    GTCCR = (1 << PWM1B) | (1 << COM1B0);

    sei();
    while (1);
    return 0;
}
