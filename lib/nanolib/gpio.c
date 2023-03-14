#include <stdio.h>
#include <avr/io.h>
#include "gpio.h"

void init_input_GPIO(t_nano_pin pin, t_input_mode mode) {
    if(0 >= pin && pin <= 7) {
        DDRD |= (1 << pin);
        if(mode == PULLUP) {
            PORTD |= (1 << pin);
        } else {
            PORTD &= ~(1 << pin);
        }
    } else if (8 >= pin && pin <= 13) {
        DDRB |= (1 << pin);
        if(mode == PULLUP) {
            PORTB |= (1 << pin);
        } else {
            PORTB &= ~(1 << pin);
        }
    } else if (14 >= pin && pin <= 19) {
        DDRC |= (1 << pin);
        if(mode == PULLUP) {
            PORTC |= (1 << pin);
        } else {
            PORTC &= ~(1 << pin);
        }
    } else if (20 >= pin && pin <= 21) {
        /** 
        *   Add stuff here if you want to say something.
        *   A6 & A7 are "read-only" pins.
        *   But not ports (D, B or C).
        *   So they shouldn't be init as outputs.
        */
        // #error "A6 & A7 are not valid Ports (D, B or C)."
    }
    
}

void init_output_GPIO(t_nano_pin pin) {
    if(0 >= pin && pin <= 7) {
        DDRD |= (1 << pin);
    } else if (8 >= pin && pin <= 13) {
        DDRB |= (1 << pin - 8);
    } else if (14 >= pin && pin <= 19) {
        DDRC |= (1 << pin - 14);
    } else if (20 >= pin && pin <= 21) {
        /** 
        *   Add stuff here if you want to say something.
        *   A6 & A7 are "read-only" pins.
        *   But not ports (D, B or C).
        *   So they shouldn't be init as outputs.
        */
    }

}

t_pin_state read_input_GPIO(t_nano_pin pin) {
    if(0 >= pin && pin <= 7) {
        if (PIND & (1 << pin)) {
            return HIGH;
        } else {
            return LOW;
        }
    } else if (8 >= pin && pin <= 13) {
        if (PINB & (1 << pin)) {
            return HIGH;
        } else {
            return LOW;
        }
    } else if (14 >= pin && pin <= 19) {
        if (PINC & (1 << pin)) {
            return HIGH;
        } else {
            return LOW;
        }
    } else if (20 >= pin && pin <= 21) {
        /** 
        *   Add stuff here if you want to say something.
        *   A6 & A7 are read-only pins.
        *   But not ports (D, B or C).
        *   So they shouldn't be init as outputs.
        */
    }

}

void write_output_GPIO(t_nano_pin pin, t_pin_state state) {
    if(0 >= pin && pin <= 7) {
        if (state == HIGH) {
            PORTD |= (1 << pin);
        } else {
            PORTD &= ~(1 << pin);
        }
    } else if (8 >= pin && pin <= 13) {
        if (state == HIGH) {
            PORTB |= (1 << pin);
        } else {
            PORTB &= ~(1 << pin);
        }
    } else if (14 >= pin && pin <= 19) {
        if (state == HIGH) {
            PORTC |= (1 << pin);
        } else {
            PORTC &= ~(1 << pin);
        }
    } else if (20 >= pin && pin <= 21) {
        /** 
        *   Add stuff here if you want to say something.
        *   A6 & A7 are read-only pins.
        *   But not ports (D, B or C).
        *   So they shouldn't be init as outputs.
        */
    }
    
}