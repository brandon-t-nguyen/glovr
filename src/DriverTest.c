#include <string.h>

#include <drivers/tm4c/UART.h>
#include <drivers/tm4c/PLL.h>

int main(void)
{
  PLL_Init(Bus80MHz);
  UART0_Init(BAUD_115200);
  while(1){
    UART0_OutString("hello world!\r\n");
  }
  return 0;
}