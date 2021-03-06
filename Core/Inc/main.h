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
#include "LCD.h"
#include "temp_sensor.h"
#include "print.h"
#include "timer.h"
#include "dimmer.h"
#include "LED.h"
#include "uc_uart.h"
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
#define PWM_FREQUENCY 10000
#define PWM_PRESCALER 1
#define LED_BOARD_Pin GPIO_PIN_13
#define LED_BOARD_GPIO_Port GPIOC
#define MIN_UP_BTN_Pin GPIO_PIN_12
#define MIN_UP_BTN_GPIO_Port GPIOB
#define MIN_UP_BTN_EXTI_IRQn EXTI15_10_IRQn
#define MIN_DOWN_BTN_Pin GPIO_PIN_13
#define MIN_DOWN_BTN_GPIO_Port GPIOB
#define MIN_DOWN_BTN_EXTI_IRQn EXTI15_10_IRQn
#define MAX_UP_BTN_Pin GPIO_PIN_14
#define MAX_UP_BTN_GPIO_Port GPIOB
#define MAX_UP_BTN_EXTI_IRQn EXTI15_10_IRQn
#define MAX_DOWN_BTN_Pin GPIO_PIN_15
#define MAX_DOWN_BTN_GPIO_Port GPIOB
#define MAX_DOWN_BTN_EXTI_IRQn EXTI15_10_IRQn
#define LED_MIN_Pin GPIO_PIN_5
#define LED_MIN_GPIO_Port GPIOB
#define LED_MAX_Pin GPIO_PIN_8
#define LED_MAX_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
#define I2C_ADC
#define MIN_DOWN_BTN_MASK (1<<0)
#define MIN_UP_BTN_MASK (1<<1)
#define MAX_DOWN_BTN_MASK (1<<2)
#define MAX_UP_BTN_MASK (1<<3)

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
