/*
 * bsp_lcd.h
 *
 *  Created on: Jun 29, 2025
 *      Author: rahul
 */

#ifndef BSP_LCD_H_
#define BSP_LCD_H_

#define BSP_LCD_HSW	10
#define BSP_LCD_HBP	20
#define BSP_LCD_HFP	10

#define BSP_LCD_VSW	2
#define BSP_LCD_VBP	2
#define BSP_LCD_VFP	4

#define BSP_LCD_ACTIVE_WIDTH_POTRAIT 240
#define BSP_LCD_ACTIVE_HEIGHT_POTRAIT 320

#define BSP_LCD_ACTIVE_WIDTH_LANDSCAPE 320
#define BSP_LCD_ACTIVE_HEIGHT_LANDSCAPE 240


void LTDC_Pin_Init(void);
void BSP_LCD_Init(void);
#define GPIO_PIN_0					0U
#define GPIO_PIN_1					1U
#define GPIO_PIN_2					2U
#define GPIO_PIN_3					3U
#define GPIO_PIN_4					4U
#define GPIO_PIN_5					5U
#define GPIO_PIN_6					6U
#define GPIO_PIN_7					7U
#define GPIO_PIN_8					8U
#define GPIO_PIN_9					9U
#define GPIO_PIN_10					10U
#define GPIO_PIN_11					11U
#define GPIO_PIN_12					12U
#define GPIO_PIN_13					13U
#define GPIO_PIN_14					14U
#define GPIO_PIN_15					15U


#define LCD_DATA_R2_PIN			GPIO_PIN_10
#define LCD_DATA_R3_PIN			GPIO_PIN_0
#define LCD_DATA_R4_PIN			GPIO_PIN_11
#define LCD_DATA_R5_PIN			GPIO_PIN_12
#define LCD_DATA_R6_PIN			GPIO_PIN_1
#define LCD_DATA_R7_PIN			GPIO_PIN_6


#define LCD_DATA_G2_PIN			GPIO_PIN_6
#define LCD_DATA_G3_PIN			GPIO_PIN_10
#define LCD_DATA_G4_PIN			GPIO_PIN_10
#define LCD_DATA_G5_PIN			GPIO_PIN_11
#define LCD_DATA_G6_PIN			GPIO_PIN_7
#define LCD_DATA_G7_PIN			GPIO_PIN_3

#define LCD_DATA_B2_PIN			GPIO_PIN_6
#define LCD_DATA_B3_PIN			GPIO_PIN_11
#define LCD_DATA_B4_PIN			GPIO_PIN_12
#define LCD_DATA_B5_PIN			GPIO_PIN_3
#define LCD_DATA_B6_PIN			GPIO_PIN_8
#define LCD_DATA_B7_PIN			GPIO_PIN_9

#define LCD_HSYNC_PIN			GPIO_PIN_6
#define LCD_VSYNC_PIN			GPIO_PIN_4
#define LCD_DE_PIN				GPIO_PIN_10
#define LCD_DOTCLK_PIN			GPIO_PIN_7


#define LCD_DATA_R2_PORT		GPIOC
#define LCD_DATA_R3_PORT		GPIOB
#define LCD_DATA_R4_PORT		GPIOA
#define LCD_DATA_R5_PORT		GPIOA
#define LCD_DATA_R6_PORT		GPIOB
#define LCD_DATA_R7_PORT		GPIOG


#define LCD_DATA_G2_PORT		GPIOA
#define LCD_DATA_G3_PORT		GPIOG
#define LCD_DATA_G4_PORT		GPIOB
#define LCD_DATA_G5_PORT		GPIOB
#define LCD_DATA_G6_PORT		GPIOC
#define LCD_DATA_G7_PORT		GPIOD


#define LCD_DATA_B2_PORT		GPIOD
#define LCD_DATA_B3_PORT		GPIOG
#define LCD_DATA_B4_PORT		GPIOG
#define LCD_DATA_B5_PORT		GPIOA
#define LCD_DATA_B6_PORT		GPIOB
#define LCD_DATA_B7_PORT		GPIOB

#define LCD_HSYNC_PORT			GPIOC
#define LCD_VSYNC_PORT			GPIOA
#define LCD_DE_PORT				GPIOF
#define LCD_DOTCLK_PORT			GPIOG

extern  GPIO_TypeDef *ltdc_io_ports[];
extern const uint8_t ltdc_pins[];
extern const uint8_t total_ltdc_pins;
extern const uint8_t ltdc_af_values[];
#endif /* BSP_LCD_H_ */
