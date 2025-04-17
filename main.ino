/* LED Blinking with delay using STM32 HAL */

#include "stm32f1xx_hal.h"

void SystemClock_Config(void);
static void MX_GPIO_Init(void);

int main(void)
{
  HAL_Init();
  SystemClock_Config();
  MX_GPIO_Init();

  while (1)
  {
    HAL_GPIO_TogglePin(GPIOC, GPIO_PIN_13); // Toggle LED pin
    HAL_Delay(1000); // 1 second delay
  }
}
