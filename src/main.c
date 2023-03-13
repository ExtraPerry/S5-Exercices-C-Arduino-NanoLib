/*
#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}
*/
#include <avr/io.h>
#include <util/delay.h>

#include <nanolib.h>

int main(void) {
  
  init_input_GPIO(D3, PULLUP);
  init_output_GPIO(D7);

  while(1) {
    if (read_input_GPIO(D3) == HIGH) {
      write_output_GPIO(D7, HIGH);
    } else {
      write_output_GPIO(D7, LOW);
    }
  }

  
  return 0;
}