#include "../app_global.h"
#include "servs_info.h"

void main()
{
  //  while(1){};

  serv_servm_add_serv(SERV_UART_IDX, SERV_UART_CODE_SEG_BASE, SERV_UART_CODE_SEG_LIMIT, SERV_UART_PARA_SEG_BASE);

  serv_uart_SendString("Enter app_0.\n",13);


}
