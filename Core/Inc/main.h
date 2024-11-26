/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32g0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

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
#define CS_Pin GPIO_PIN_0
#define CS_GPIO_Port GPIOA
#define SW5_TOUCH_Pin GPIO_PIN_5
#define SW5_TOUCH_GPIO_Port GPIOA
#define SW1_BOOT0_Pin GPIO_PIN_14
#define SW1_BOOT0_GPIO_Port GPIOA
#define SW4_BUTTON_Pin GPIO_PIN_15
#define SW4_BUTTON_GPIO_Port GPIOA
#define D4_LED_Pin GPIO_PIN_3
#define D4_LED_GPIO_Port GPIOB
#define D3_LED_Pin GPIO_PIN_4
#define D3_LED_GPIO_Port GPIOB
#define D2_LED_Pin GPIO_PIN_5
#define D2_LED_GPIO_Port GPIOB
#define D1_LED_Pin GPIO_PIN_6
#define D1_LED_GPIO_Port GPIOB
#define SW3_BUTTON_Pin GPIO_PIN_7
#define SW3_BUTTON_GPIO_Port GPIOB
#define SW2_BUTTON_Pin GPIO_PIN_8
#define SW2_BUTTON_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
