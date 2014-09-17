#include "../../testkernel/include/syscall.h"

void main()
{
  //  while(1){};
  __syscall_Uart_SendString("Enter app_0.\n",13);


}
