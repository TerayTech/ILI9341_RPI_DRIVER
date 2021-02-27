#ifndef __LCD_INIT_H
#define __LCD_INIT_H

#include <wiringPi.h>

#define u16 unsigned int 
#define u8  unsigned char

#define delay_ms() delay()

#define USE_HORIZONTAL 3  //设置横屏或者竖屏显示 0或1为竖屏 2或3为横屏


#if USE_HORIZONTAL==0||USE_HORIZONTAL==1
#define LCD_W 240
#define LCD_H 320

#else
#define LCD_W 320
#define LCD_H 240
#endif

#define SPI_SCLK 14
#define SPI_MISO 13
#define SPI_MOSI 12

#define LCD_RST 3
#define LCD_DC 2
#define LCD_CS 0

#define LCD_BLK 7

//-----------------LCD端口定义---------------- 

#define LCD_SCLK_Clr() digitalWrite(SPI_SCLK,LOW)
#define LCD_SCLK_Set() digitalWrite(SPI_SCLK,HIGH)

#define LCD_MOSI_Clr() digitalWrite(SPI_MOSI,LOW)
#define LCD_MOSI_Set() digitalWrite(SPI_MOSI,HIGH)

#define LCD_RES_Clr()  digitalWrite(LCD_RST,LOW)
#define LCD_RES_Set()  digitalWrite(LCD_RST,HIGH)

#define LCD_DC_Clr()   digitalWrite(LCD_DC,LOW)
#define LCD_DC_Set()   digitalWrite(LCD_DC,HIGH)
 		     
#define LCD_CS_Clr()   digitalWrite(LCD_CS,LOW)
#define LCD_CS_Set()   digitalWrite(LCD_CS,HIGH)

#define LCD_BLK_Clr()  digitalWrite(LCD_BLK,LOW)
#define LCD_BLK_Set()  digitalWrite(LCD_BLK,HIGH)




void LCD_GPIO_Init(void);//初始化GPIO
void LCD_Writ_Bus(u8 dat);//模拟SPI时序
void LCD_WR_DATA8(u8 dat);//写入一个字节
void LCD_WR_DATA(u16 dat);//写入两个字节
void LCD_WR_REG(u8 dat);//写入一个指令
void LCD_Address_Set(u16 x1,u16 y1,u16 x2,u16 y2);//设置坐标函数
void LCD_Init(void);//LCD初始化
#endif




