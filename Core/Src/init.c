#include "init.h"


void GPIO_Ini(void){
 RCC-> AHB1ENR |= RCC_AHB1ENR_GPIOCEN | RCC_AHB1ENR_GPIOBEN;

    // THE LED SETTINGS
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE0_0);
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE7_0);
    SET_BIT(GPIOB->MODER, GPIO_MODER_MODE14_0);
    SET_BIT(GPIOC->MODER, GPIO_MODER_MODE8_0);

    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_0);
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_7);
    CLEAR_BIT(GPIOB->OTYPER, GPIO_OTYPER_OT_14);
    CLEAR_BIT(GPIOC->OTYPER, GPIO_OTYPER_OT_8);


    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR0_0);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR7_0);
    SET_BIT(GPIOB->OSPEEDR, GPIO_OSPEEDER_OSPEEDR14_0);
    SET_BIT(GPIOC->OSPEEDR, GPIO_OSPEEDER_OSPEEDR8_0);

    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR0_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR7_0);
    CLEAR_BIT(GPIOB->PUPDR, GPIO_PUPDR_PUPDR14_0);
    CLEAR_BIT(GPIOC->PUPDR, GPIO_PUPDR_PUPDR8_0);

    // THE BUTTON SETTINGS PC13
    CLEAR_BIT(GPIOC->MODER, GPIO_MODER_MODE13);
    SET_BIT(GPIOC->PUPDR, GPIO_PUPDR_PUPD13_1);
}
