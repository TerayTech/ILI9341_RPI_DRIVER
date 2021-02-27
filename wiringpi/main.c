
#include "lcd_init.h"
#include "lcd.h"
#include "pic.h"
#include "image.h"

#include <stdio.h>
#include <wiringPi.h>

#define u32 unsigned int
#define u16 unsigned int
#define u8 unsigned char

int main(void)
{
	u8 i, j;
	float t = 0;
	double timePerTransaction, perfectTimePerTransaction, dataSpeed ;
	unsigned int start, end ;
	//delay_init();
	//LED_Init();//LED初始化
	LCD_Init(); //LCD初始化
	LCD_Fill(0, 0, LCD_W, LCD_H, WHITE);
	while (1)
	{
		// LCD_ShowChinese(0, 0, "中景园电子", RED, WHITE, 32, 0);
		// LCD_ShowString(0, 40, "LCD_W:", RED, WHITE, 16, 0);
		// LCD_ShowIntNum(48, 40, LCD_W, 3, RED, WHITE, 16);
		// LCD_ShowString(80, 40, "LCD_H:", RED, WHITE, 16, 0);
		// LCD_ShowIntNum(128, 40, LCD_H, 3, RED, WHITE, 16);
		// LCD_ShowString(80, 40, "LCD_H:", RED, WHITE, 16, 0);
		// LCD_ShowString(0, 70, "Increaseing Nun:", RED, WHITE, 16, 0);
		// LCD_ShowFloatNum1(128, 70, t, 4, RED, WHITE, 16);
		LCD_ShowPicture(0, 0, 240, 240, gImage_aqua);
		//delay(2000);
		LCD_ShowPicture(0, 0, 240, 240, gImage_mur_cat);
		//delay(2000);
		start = millis () ;
		LCD_ShowPicture(0, 0, 320, 240, gImage_xingqiu);
		end = millis () ;
		timePerTransaction = ((double)(end - start) / (double)1) / 1000.0 ;
		printf ("|Image Delay : %8.3f ms", timePerTransaction * 1000.0) ;
		printf ("|\n") ;
		//delay(2000);
	}
}
