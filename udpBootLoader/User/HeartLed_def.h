
#ifdef RUN_FOR_SRC_2000

#define HEART_LED_GPIO	GPIOD
#define HEART_LED_PIN		GPIO_Pin_3
#define HEART_LED_PERIOD	6000

#define LINK_LED_GPIO	GPIOG
#define LINK_LED_PIN		GPIO_Pin_12
#define LINK_LED_PERIOD	20000

#else

#define HEART_LED_GPIO	GPIOE
#define HEART_LED_PIN		GPIO_Pin_2
#define HEART_LED_PERIOD	2000

#define LINK_LED_GPIO	GPIOE
#define LINK_LED_PIN		GPIO_Pin_5
#define LINK_LED_PERIOD	20000

#endif

//end of file