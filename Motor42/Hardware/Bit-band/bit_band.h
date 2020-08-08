/**
 * @Author: HZG
 * @Description: 
 * @Date: 2020-08-08 13:10:13
 * @LastEditors: HZG
 * @LastEditTime: 2020-08-08 13:28:12
 * @History: 
 * @FilePath: \Motor42\Hardware\Bit-band\bit_band.h
 * @Others: 
 */
#ifndef BIT_BAND_H
#define BIT_BAND_H

//位操作
#define getbit(a,b)			( (u8) (( (a)>>b )& 0x01 ) )
#define setbit(x,y)			x|=(1<<y) //将X的第Y位置1
#define clrbit(x,y)			x&=~(1<<y) //将X的第Y位清0
#define tooglebit(x,y)		x^=(1<<y)	//将X的第Y位取反
#define MY_MakeWord(a,b)	( ((u16)(a)<<8) | (b) )

//位带操作,实现51类似的GPIO控制功能
//具体实现思想,参考<<CM3权威指南>>第五章(87页~92页).
//IO口操作宏定义
#define BITBAND(addr, bitnum) ((addr & 0xF0000000)+0x2000000+((addr &0xFFFFF)<<5)+(bitnum<<2)) 
#define MEM_ADDR(addr)  *((volatile unsigned long  *)(addr)) 
#define BIT_ADDR(addr, bitnum)   MEM_ADDR(BITBAND(addr, bitnum)) 
//IO口地址映射
#define GPIOA_ODR_Addr    (GPIOA_BASE+12) //0x4001080C 
#define GPIOB_ODR_Addr    (GPIOB_BASE+12) //0x40010C0C 
#define GPIOC_ODR_Addr    (GPIOC_BASE+12) //0x4001100C 
#define GPIOD_ODR_Addr    (GPIOD_BASE+12) //0x4001140C 
#define GPIOE_ODR_Addr    (GPIOE_BASE+12) //0x4001180C 
#define GPIOF_ODR_Addr    (GPIOF_BASE+12) //0x40011A0C    
#define GPIOG_ODR_Addr    (GPIOG_BASE+12) //0x40011E0C    

#define GPIOA_IDR_Addr    (GPIOA_BASE+8) //0x40010808 
#define GPIOB_IDR_Addr    (GPIOB_BASE+8) //0x40010C08 
#define GPIOC_IDR_Addr    (GPIOC_BASE+8) //0x40011008 
#define GPIOD_IDR_Addr    (GPIOD_BASE+8) //0x40011408 
#define GPIOE_IDR_Addr    (GPIOE_BASE+8) //0x40011808 
#define GPIOF_IDR_Addr    (GPIOF_BASE+8) //0x40011A08 
#define GPIOG_IDR_Addr    (GPIOG_BASE+8) //0x40011E08 
 
//IO口操作,只对单一的IO口!
//确保n的值小于16!
#define PAout(n)   BIT_ADDR(GPIOA_ODR_Addr,n)  //输出 
#define PAin(n)    BIT_ADDR(GPIOA_IDR_Addr,n)  //输入 

#define PBout(n)   BIT_ADDR(GPIOB_ODR_Addr,n)  //输出 
#define PBin(n)    BIT_ADDR(GPIOB_IDR_Addr,n)  //输入 

#define PCout(n)   BIT_ADDR(GPIOC_ODR_Addr,n)  //输出 
#define PCin(n)    BIT_ADDR(GPIOC_IDR_Addr,n)  //输入 

#define PDout(n)   BIT_ADDR(GPIOD_ODR_Addr,n)  //输出 
#define PDin(n)    BIT_ADDR(GPIOD_IDR_Addr,n)  //输入 

#define PEout(n)   BIT_ADDR(GPIOE_ODR_Addr,n)  //输出 
#define PEin(n)    BIT_ADDR(GPIOE_IDR_Addr,n)  //输入

#define PFout(n)   BIT_ADDR(GPIOF_ODR_Addr,n)  //输出 
#define PFin(n)    BIT_ADDR(GPIOF_IDR_Addr,n)  //输入

#define PGout(n)   BIT_ADDR(GPIOG_ODR_Addr,n)  //输出 
#define PGin(n)    BIT_ADDR(GPIOG_IDR_Addr,n)  //输入

/* 映射IO操作 start */
    /* 输入 */
#define EnCode_KEY  PAin(0)
#define KEY         PAin(1)

    /* 输出 */
#define LED_CTR     PAout(2)
#define CS1         PAout(3)
#define CS2         PAout(4)
#define OLED_DC     PBout(0)
#define Motor_DIR   PBout(12)
#define Motor_M1    PBout(15)
#define Motor_M2    PBout(14)
#define Motor_M3    PBout(13)
#define Motor_EN    PAout(8)
#define Motor_SLP   PAout(11)
    
/* 映射IO操作 end */

#endif /* BIT_BAND_H */
