#include "LED.h"

int main()
{
	LED_Init();//LED端口初始化
	GPIO_ResetBits(LED0_PORT,LED0_PIN);//点亮LED
	int cnt = 0;
	while(cnt <= 100)
	{
		++cnt;
	};
}
