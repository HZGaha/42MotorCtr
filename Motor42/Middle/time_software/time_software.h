/**
 * @Author: HZG
 * @Description: 
 * @Date: 2020-08-08 13:24:45
 * @LastEditors: HZG
 * @LastEditTime: 2020-08-08 13:38:06
 * @History: 
 * @FilePath: \Motor42\Middle\time_software\time_software.h
 * @Others: 
 */
#ifndef TIME_SOFTWARE_H
#define TIME_SOFTWARE_H

#include "main.h"

#define SOFTWARE_TIME_SIZE			8
#define SOFTWARE_TIME_ARRAY			{1, 5, 10, 50, 100, 500, 1000, 3000}

#define SoftTimeBit_1MS				(getbit(softTimeTrigger, 0))
#define SoftTimeBit_5MS				(getbit(softTimeTrigger, 1))
#define SoftTimeBit_10MS			(getbit(softTimeTrigger, 2))
#define SoftTimeBit_50MS			(getbit(softTimeTrigger, 3))
#define SoftTimeBit_100MS			(getbit(softTimeTrigger, 4))
#define SoftTimeBit_500MS			(getbit(softTimeTrigger, 5))
#define SoftTimeBit_1000MS			(getbit(softTimeTrigger, 6))
#define SoftTimeBit_3000MS			(getbit(softTimeTrigger, 7))


extern uint16_t softTimeValue[SOFTWARE_TIME_SIZE];
extern uint8_t softTimeTrigger;


void softwareTimeScan(void);
void time_software_run(void);


#endif /* TIME_SOFTWARE_H */
