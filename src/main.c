#include <avr/io.h>
#include <util/delay.h>

int main()
{
  DDRD = 0b10000000;
  DDRD &= ~(1 << DDD3); 
  PORTD |= (1 << PORTD3); 

  while(1) {
    if (PIND & (1 << PIND3))
    {
      PORTD &= ~(1 << PORTD7); 
    } else {
      PORTD |= (1 << PORTD7); 
    }
  }
}