#ifndef gpio_h
#define gpio_h

#include "nanolib.h"

typedef enum e_input_mode { NO_PULLUP, PULLUP } t_input_mode;
typedef enum e_pin_state {LOW, HIGH} t_pin_state;

void init_input_GPIO(t_nano_pin pin, t_input_mode mode);
void init_output_GPIO(t_nano_pin pin);

t_pin_state read_input_GPIO(t_nano_pin pin);
void write_output_GPIO(t_nano_pin pin, t_pin_state state);

#endif
