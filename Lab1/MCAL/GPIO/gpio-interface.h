#define GPIO_PORTA 0

#define GPIO_OUTPUT 0
#define GPIO_INPUT 1



void GPIO_setpinDirection(unsigned char Port, unsigned char Pin, unsigned char Direction);
void GPIO_SetPinValue(unsigned char Port ,unsigned char Pin,unsigned char Value);
unsigned char GPIO_GetPinValue(unsigned char Port, unsigned char Pin);
