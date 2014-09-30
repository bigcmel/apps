#include "app_global.h"


WORD serv_uart_SendByte(char ch)
{
  WORD opt_code;
  WORD para_base[SERV_MAX_PARA_NUM];
  WORD para_num;

  WORD result;


  opt_code = SERV_UART_SendByte;
  para_num = SERV_UART_SendByte_PARA_NUM;

  para_base[0] = (WORD)(&ch);

  __syscall_serv_send_para_and_idx(SERV_UART_IDX, opt_code, (WORD)para_base, para_num);
  result = __syscall_serv_run();

  return result;
}


WORD serv_uart_SendString(const char* str, unsigned int len)
{
  WORD opt_code;
  WORD para_base[SERV_MAX_PARA_NUM];
  WORD para_num;

  WORD result;


  opt_code = SERV_UART_SendString;
  para_num = SERV_UART_SendString_PARA_NUM;

  para_base[0] = (WORD)str;
  para_base[1] = (WORD)len;

  __syscall_serv_send_para_and_idx(SERV_UART_IDX, opt_code, (WORD)para_base, para_num);
  result = __syscall_serv_run();

  return result;
}

