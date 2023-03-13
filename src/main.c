#include <nanolib.h>

#include <util/delay.h>

int main()
{
  init_input_GPIO(D3, PULLUP);
  init_output_GPIO(D7);
  
  while(1) {
    if (read_input_GPIO(D3) == LOW) {
      write_output_GPIO(D7, HIGH); 
    } else {
      write_output_GPIO(D7, LOW);
    }
  }
}