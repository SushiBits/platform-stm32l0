/*
 * stm32g0xx_handler.h
 *
 *  Created on: Apr 29, 2019
 *      Author: technix
 */

#if defined(STM32L010xB)
#include "stm32l010xb_handler.h"
#elif defined(STM32L010x8)
#include "stm32l010x8_handler.h"
#elif defined(STM32L010x6)
#include "stm32l010x6_handler.h"
#elif defined(STM32L010x4)
#include "stm32l010x4_handler.h"
#elif defined(STM32L011xx)
#include "stm32l011xx_handler.h"
#elif defined(STM32L021xx)
#include "stm32l021xx_handler.h"
#elif defined(STM32L031xx)
#include "stm32l031xx_handler.h"
#elif defined(STM32L041xx)
#include "stm32l041xx_handler.h"
#elif defined(STM32L051xx)
#include "stm32l051xx_handler.h"
#elif defined(STM32L052xx)
#include "stm32l052xx_handler.h"
#elif defined(STM32L053xx)
#include "stm32l053xx_handler.h"
#elif defined(STM32L062xx)
#include "stm32l062xx_handler.h"
#elif defined(STM32L063xx)
#include "stm32l063xx_handler.h"
#elif defined(STM32L061xx)
#include "stm32l061xx_handler.h"
#elif defined(STM32L071xx)
#include "stm32l071xx_handler.h"
#elif defined(STM32L072xx)
#include "stm32l072xx_handler.h"
#elif defined(STM32L073xx)
#include "stm32l073xx_handler.h"
#elif defined(STM32L082xx)
#include "stm32l082xx_handler.h"
#elif defined(STM32L083xx)
#include "stm32l083xx_handler.h"
#elif defined(STM32L081xx)
#include "stm32l081xx_handler.h"
#else
#error "Please select first the target STM32L0xx device used in your application (in stm32l0xx.h file)"
#endif
