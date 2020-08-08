/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

#include "bit_band.h"

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define EnCode_KEY_Pin GPIO_PIN_0
#define EnCode_KEY_GPIO_Port GPIOA
#define KEY_Pin GPIO_PIN_1
#define KEY_GPIO_Port GPIOA
#define LED_CTR_Pin GPIO_PIN_2
#define LED_CTR_GPIO_Port GPIOA
#define CS1_Pin GPIO_PIN_3
#define CS1_GPIO_Port GPIOA
#define CS2_Pin GPIO_PIN_4
#define CS2_GPIO_Port GPIOA
#define OLED_DC_Pin GPIO_PIN_0
#define OLED_DC_GPIO_Port GPIOB
#define Motor_DIR_Pin GPIO_PIN_12
#define Motor_DIR_GPIO_Port GPIOB
#define Motor_M3_Pin GPIO_PIN_13
#define Motor_M3_GPIO_Port GPIOB
#define Motor_M2_Pin GPIO_PIN_14
#define Motor_M2_GPIO_Port GPIOB
#define Motor_M1_Pin GPIO_PIN_15
#define Motor_M1_GPIO_Port GPIOB
#define Motor_EN_Pin GPIO_PIN_8
#define Motor_EN_GPIO_Port GPIOA
#define Motor_SLP_Pin GPIO_PIN_11
#define Motor_SLP_GPIO_Port GPIOA
#define EnCode_A_Pin GPIO_PIN_4
#define EnCode_A_GPIO_Port GPIOB
#define EnCode_B_Pin GPIO_PIN_5
#define EnCode_B_GPIO_Port GPIOB
#define Motor_STEP_OUT_Pin GPIO_PIN_6
#define Motor_STEP_OUT_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
