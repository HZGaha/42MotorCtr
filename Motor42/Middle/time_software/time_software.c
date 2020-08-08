/**
 * @Author: HZG
 * @Description: 
 * @Date: 2020-08-08 13:24:45
 * @LastEditors: HZG
 * @LastEditTime: 2020-08-08 13:37:50
 * @History: 
 * @FilePath: \Motor42\Middle\time_software\time_software.c
 * @Others: 
 */
#include "time_software.h"

uint16_t softTimeValue[SOFTWARE_TIME_SIZE] = SOFTWARE_TIME_ARRAY;
uint8_t softTimeTrigger = 0;

/**
 * @Function: getTimeSoftwareTrigger
 * @Description: 软件定时器		仅允许在 主循环 中调用一次，不允许多处调用！！！
 * @Calls: getSysTime2count
 * @Return: 定时器触发标志位，每个bit代表一个定时器，触发：该位为1
 * @Others: 基于Time2定时器为基准
 */
void softwareTimeScan(void)
{
    uint8_t i;
    //软件定时器定时时间数组	单位：ms
    uint16_t softwareTimeReload[SOFTWARE_TIME_SIZE] = SOFTWARE_TIME_ARRAY;		//8组软件定时时间

    for (i=0; i<SOFTWARE_TIME_SIZE; i++)
    {
        if (softTimeValue[i] == 0)
        {
            tooglebit(softTimeTrigger, i);

            softTimeValue[i] = softwareTimeReload[i];
        }
    }
}

void time_software_run(void)
{
    uint8_t i;
    for (i=0; i<SOFTWARE_TIME_SIZE; i++)
    {
        if(softTimeValue[i] != 0)	softTimeValue[i]--;
    }

}
