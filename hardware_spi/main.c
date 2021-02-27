//////////////////////////////////////////////////////////////////////////////////
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//�о�԰����
//���̵�ַ��http://shop73023976.taobao.com
//
//  �� �� ��   : main.c
//  �� �� ��   : v2.0
//  ��    ��   : HuangKai
//  ��������   : 2018-10-31
//  ����޸�   :
//  ��������   :��ʾ����(STM32F103ϵ��)
//              ˵��:
//              ----------------------------------------------------------------
//              GND   ��Դ��
//              VCC   3.3v��Դ
//              SCL   PA0��SCLK��
//              SDA   PA1��MOSI��
//              RES   PA2
//              DC    PA3
//              CS    PA4
//              BLK   PA5
//              ----------------------------------------------------------------
// �޸���ʷ   :
// ��    ��   :
// ��    ��   : HuangKai
// �޸�����   : �����ļ�
//��Ȩ���У�����ؾ���
//Copyright(C) �о�԰����2018-10-31
//All rights reserved
//******************************************************************************/
//#include "delay.h"
//#include "sys.h"
//#include "led.h"
#include "lcd_init.h"
#include "lcd.h"
#include "pic.h"
#include "image.h"

#include <wiringPi.h>
#include <wiringPiSPI.h>

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include <string.h>
#include <errno.h>

#define u32 unsigned int
#define u16 unsigned int
#define u8 unsigned char

#define MAX_SIZE (1024 * 1024)

int main(void)
{
	u8 i, j;
	float t = 0;
	double timePerTransaction, perfectTimePerTransaction, dataSpeed ;
	unsigned int start, end ;
	//delay_init();
	//LED_Init();//LED��ʼ��
	LCD_Init(); //LCD��ʼ��
	//LCD_Fill(0, 0, LCD_W, LCD_H, WHITE);

	// unsigned char *myData;

	// if ((myData = malloc(MAX_SIZE)) == NULL)
	// {
	// 	fprintf(stderr, "Unable to allocate buffer: %s\n", strerror(errno));
	// 	exit(EXIT_FAILURE);
	// }

	// if (wiringPiSPIDataRW(0, gImage_aqua, 115200) == -1)
	// {
	// 	printf("SPI failure: %s\n", strerror(errno));
	// }

	while (1)
	{
		// LCD_ShowChinese(0, 0, "�о�԰����", RED, WHITE, 32, 0);
		// LCD_ShowString(0, 40, "LCD_W:", RED, WHITE, 16, 0);
		// LCD_ShowIntNum(48, 40, LCD_W, 3, RED, WHITE, 16);
		// LCD_ShowString(80, 40, "LCD_H:", RED, WHITE, 16, 0);
		// LCD_ShowIntNum(128, 40, LCD_H, 3, RED, WHITE, 16);
		// LCD_ShowString(80, 40, "LCD_H:", RED, WHITE, 16, 0);
		// LCD_ShowString(0, 70, "Increaseing Nun:", RED, WHITE, 16, 0);
		// LCD_ShowFloatNum1(128, 70, t, 4, RED, WHITE, 16);
		start = millis () ;
		//LCD_ShowPicture(0, 0, 240, 240, gImage_aqua);
		LCD_ShowPicture(0, 0, 320, 240, gImage_xingqiu);
		end = millis () ;
		timePerTransaction = ((double)(end - start) / (double)1) / 1000.0 ;
		printf ("|Image Delay : %8.3f ms", timePerTransaction * 1000.0) ;
		printf ("|\n") ;
		//delay(1000);
		//LCD_ShowPicture(0, 0, 240, 240, gImage_aqua);
		//LCD_ShowPicture(80, 0, 240, 240, gImage_mur_cat);
		//delay(2000);
		//
		//delay(2000);
	}
}
