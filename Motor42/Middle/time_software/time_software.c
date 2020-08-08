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
 * @Description: �����ʱ��		�������� ��ѭ�� �е���һ�Σ�������ദ���ã�����
 * @Calls: getSysTime2count
 * @Return: ��ʱ��������־λ��ÿ��bit����һ����ʱ������������λΪ1
 * @Others: ����Time2��ʱ��Ϊ��׼
 */
void softwareTimeScan(void)
{
    uint8_t i;
    //�����ʱ����ʱʱ������	��λ��ms
    uint16_t softwareTimeReload[SOFTWARE_TIME_SIZE] = SOFTWARE_TIME_ARRAY;		//8�������ʱʱ��

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
