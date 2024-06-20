#ifndef BSP_USART_H__
#define BSP_USART_H__

#include "main.h"
#include "usart.h"
#include "dma.h"

#define UART_RX_DMA_SIZE (1024)

#define SBUS_HEAD 0X0F
#define SBUS_END 	0X00

#define USART5_BUFLEN 25
#define USART5_MAX_LEN USART5_BUFLEN * 2


extern uint8_t usart5_buf[USART5_BUFLEN];


typedef struct
{
	    uint8_t state;
    uint8_t data[64];

} wifi_rx_t;
extern wifi_rx_t wifi_rx;


typedef struct
{
    int16_t ch[10];
} rc_sbus_t;
extern rc_sbus_t rc_sbus_receive;

//ACTION��λģ������������
typedef union _imu_data
{
    uint8_t data[24];
    float ActVal[6];
} imudata_t;
extern imudata_t imudata;

void uart_receive_handler(UART_HandleTypeDef *huart);
void uart_receive_init(UART_HandleTypeDef *huart);
void usart_init(void);
#define ABS(x) ((x > 0) ? (x) : (-x))

#endif
