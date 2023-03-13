# nanolib GPIO

**Fichiers attendus:** `gpio.h`, `gpio.c` et un `main.c` de test.

Implémenter dans votre nanolib une interface pour utiliser les GPIOs.

`lib/nanolib/nanolib.h`
```c
#ifndef nanolib_h
#define nanolib_h

// Library level includes go here

typedef enum e_nano_pin_id {
  D0, D1, D2, D3, D4, D5, D6, D7, D8, D9, D10, D11, D12, D13,
  A0, A1, A2, A3, A4, A5, A6, A7
} t_nano_pin;

#include "gpio.h"

#endif
```


`lib/nanolib/gpio.h`
```c
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
```