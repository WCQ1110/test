/****************************************Copyright (c)****************************************************
 
**--------------File Info---------------------------------------------------------------------------------
** File name:STM32_LED&KEY
** Last modified Date: 2020.12.06
** Last Version:1.0
** Descriptions:contrl LED by KEY
**
**--------------------------------------------------------------------------------------------------------
** Created by:Engineer_DaoDao
** Created date:2020/12/06
** Version:1.0
** Descriptions:
**--------------------------------------------------------------------------------------------------------*/
#include "stm32f10x.h"
#include "led.h"
#include "key.h"
#include "rcclkconfig.h"

#define Soft_Time Delay_Time(0xfffff)

void Delay_Time(uint32_t count);
int main(void)
{
	
	LED_GPIO_Config();
	KEY_GPIO_Config();
	
	while(1)
	{
		LED_ON;
		if ( Key_Scan(KEY_GPIO_Port,KEY_GPIO_Pin) == KEY_OFF )
		{
			LED_OFF;
		}		
	}
}

void Delay_Time(uint32_t count)
{
	
	while(count--);
		
}

