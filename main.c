#include <stdio.h>
#include "pico/stdlib.h"

int main() {

  gpio_init(25);
  gpio_init(0);
  gpio_set_dir(25,true);
  gpio_set_dir(0,false);
  
  while (true) {
    char val2 = gpio_get(25);
    char val = gpio_get(0);
    
    if (val==1){
      if(val2==1){
        gpio_put(25,false);
      } 
      else if (val2==0){
        gpio_put(25,true);
      }
    }
    sleep_ms(500);
  }
}

