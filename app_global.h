#ifndef __APP_GLOBAL_H__
#define __APP_GLOBAL_H__


#define NULL 0x0


typedef unsigned char BYTE;
typedef unsigned short HWORD; // 半字，两个字节
typedef unsigned long WORD; // 字，四个字节

typedef void(*PTRFUNC)(void); // PTRFUNC 是一个指向函数的指针


// 一个 sys 服务的参数值上限
#define SERV_MAX_PARA_NUM 5


// uart 服务部分
#define SERV_UART_IDX 0x0

#define SERV_UART_INIT 0x1        // 操作码定义
#define SERV_UART_SendByte 0x2
#define SERV_UART_SendString 0x3

#define SERV_UART_SendByte_PARA_NUM 1
extern WORD serv_uart_SendByte(char ch);

#define SERV_UART_SendString_PARA_NUM 2
extern WORD serv_uart_SendString(const char* str, unsigned int len);




#endif
