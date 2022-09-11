/*==============================================================================================
===============================   - GPIO_private.h				 ===============================
===============================   - Created: 6/8/2022			 ===============================
===============================   - Author: Ahmed Hamdy   ===============================
===============================   - Version : _1_				 ===============================
===============================   - Note :
									     *-
									     *-
=================================================================================================*/ 

/*===============================================================================================

*	 - Developer can't Edit in it    
*	  - Register _ Defination		
*	  - Design : 
					- #define	:	YES
					- Union		:	NO
					- Struct	:	YES
					
===================================================================================================*/

/**************************************************************************************************
 *       _____ _____ _____ ____             _____  _____  _______      __  _______ ______ 
 *      / ____|  __ \_   _/ __ \           |  __ \|  __ \|_   _\ \    / /\|__   __|  ____|
 *     | |  __| |__) || || |  | |  ______  | |__) | |__) | | |  \ \  / /  \  | |  | |__   
 *     | | |_ |  ___/ | || |  | | |______| |  ___/|  _  /  | |   \ \/ / /\ \ | |  |  __|  
 *     | |__| | |    _| || |__| |          | |    | | \ \ _| |_   \  / ____ \| |  | |____ 
 *      \_____|_|   |_____\____/           |_|    |_|  \_\_____|   \/_/    \_\_|  |______|
 *                                                                                        
 *                                                                                        
 **************************************************************************************************/




/*=====================================================================================
===================    guard of file will call on time in .c	    ===================
=======================================================================================*/ 

#ifndef _GPIO_PRIVATE_H
#define _GPIO_PRIVATE_H

/*=================================================================================
	-----> Macros
			*  Base_Address GPI0x				
=================================================================================*/

#define  GPIOA_BASE_ADDRESS         0x40020000   /*!<  Base_Address GPI0A    */
#define  GPIOB_BASE_ADDRESS         0x40020400	 /*!<  Base_Address GPI0B    */
#define  GPIOC_BASE_ADDRESS         0x40020800   /*!<  Base_Address GPI0C    */
#define  GPIOD_BASE_ADDRESS 		0x40020C00   /*!<  Base_Address GPI0D    */
#define  GPIOE_BASE_ADDRESS 		0x40021000   /*!<  Base_Address GPI0E    */
#define  GPIOH_BASE_ADDRESS 		0x40021C00   /*!<  Base_Address GPI0H    */

/*=================================================================================
	-----> Macros
			  *  Register Map	 GPIO_A		
===================================================================================*/

#define GPIOA_MODER            (*((volatile u32 *)(GPIOA_BASE_ADDRESS+0x00)))	/*!< GPIO port mode register,               Address offset: 0x00      */
#define GPIOA_OTYPER           (*((volatile u32 *)(GPIOA_BASE_ADDRESS+0x04)))   /*!< GPIO port output type register,        Address offset: 0x04      */
#define GPIOA_OSPEEDR          (*((volatile u32 *)(GPIOA_BASE_ADDRESS+0x08)))   /*!< GPIO port output speed register,       Address offset: 0x08      */
#define GPIOA_PUPDR            (*((volatile u32 *)(GPIOA_BASE_ADDRESS+0x0C)))   /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
#define GPIOA_IDR              (*((volatile u32 *)(GPIOA_BASE_ADDRESS+0x10)))   /*!< GPIO port input data register,         Address offset: 0x10      */
#define GPIOA_ODR              (*((volatile u32 *)(GPIOA_BASE_ADDRESS+0x14)))   /*!< GPIO port output data register,        Address offset: 0x14      */
#define GPIOA_BSRR             (*((volatile u32 *)(GPIOA_BASE_ADDRESS+0x18)))   /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
#define GPIOA_LCKR             (*((volatile u32 *)(GPIOA_BASE_ADDRESS+0x1C)))   /*!< GPIO port configuration lock register, Address offset: 0x1C      */
#define GPIOA_AFRL             (*((volatile u32 *)(GPIOA_BASE_ADDRESS+0x20)))   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
#define GPIOA_AFRH             (*((volatile u32 *)(GPIOA_BASE_ADDRESS+0x24)))

/*=================================================================================
	-----> Macros
			  *  Register Map	 GPIO_B	
=================================================================================*/

#define GPIOB_MODER            (*((volatile u32 *)(GPIOB_BASE_ADDRESS+0x00)))	/*!< GPIO port mode register,               Address offset: 0x00      */
#define GPIOB_OTYPER           (*((volatile u32 *)(GPIOB_BASE_ADDRESS+0x04)))   /*!< GPIO port output type register,        Address offset: 0x04      */
#define GPIOB_OSPEEDR          (*((volatile u32 *)(GPIOB_BASE_ADDRESS+0x08)))   /*!< GPIO port output speed register,       Address offset: 0x08      */
#define GPIOB_PUPDR            (*((volatile u32 *)(GPIOB_BASE_ADDRESS+0x0C)))   /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
#define GPIOB_IDR              (*((volatile u32 *)(GPIOB_BASE_ADDRESS+0x10)))   /*!< GPIO port input data register,         Address offset: 0x10      */
#define GPIOB_ODR              (*((volatile u32 *)(GPIOB_BASE_ADDRESS+0x14)))   /*!< GPIO port output data register,        Address offset: 0x14      */
#define GPIOB_BSRR             (*((volatile u32 *)(GPIOB_BASE_ADDRESS+0x18)))   /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
#define GPIOB_LCKR             (*((volatile u32 *)(GPIOB_BASE_ADDRESS+0x1C)))   /*!< GPIO port configuration lock register, Address offset: 0x1C      */
#define GPIOB_AFRL             (*((volatile u32 *)(GPIOB_BASE_ADDRESS+0x20)))   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
#define GPIOB_AFRH             (*((volatile u32 *)(GPIOB_BASE_ADDRESS+0x24)))


/*=================================================================================
	-----> Macros
			  *  Register Map	 GPIO_C
=================================================================================*/

#define GPIOC_MODER            (*((volatile u32 *)(GPIOC_BASE_ADDRESS+0x00)))	/*!< GPIO port mode register,               Address offset: 0x00      */
#define GPIOC_OTYPER           (*((volatile u32 *)(GPIOC_BASE_ADDRESS+0x04)))   /*!< GPIO port output type register,        Address offset: 0x04      */
#define GPIOC_OSPEEDR          (*((volatile u32 *)(GPIOC_BASE_ADDRESS+0x08)))   /*!< GPIO port output speed register,       Address offset: 0x08      */
#define GPIOC_PUPDR            (*((volatile u32 *)(GPIOC_BASE_ADDRESS+0x0C)))   /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
#define GPIOC_IDR              (*((volatile u32 *)(GPIOC_BASE_ADDRESS+0x10)))   /*!< GPIO port input data register,         Address offset: 0x10      */
#define GPIOC_ODR              (*((volatile u32 *)(GPIOC_BASE_ADDRESS+0x14)))   /*!< GPIO port output data register,        Address offset: 0x14      */
#define GPIOC_BSRR             (*((volatile u32 *)(GPIOC_BASE_ADDRESS+0x18)))   /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
#define GPIOC_LCKR             (*((volatile u32 *)(GPIOC_BASE_ADDRESS+0x1C)))   /*!< GPIO port configuration lock register, Address offset: 0x1C      */
#define GPIOC_AFRL             (*((volatile u32 *)(GPIOC_BASE_ADDRESS+0x20)))   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
#define GPIOC_AFRH             (*((volatile u32 *)(GPIOC_BASE_ADDRESS+0x24)))

/*=================================================================================
	-----> Macros
			  *  Register Map	 GPIO_D
=================================================================================*/

#define GPIOD_MODER            (*((volatile u32 *)(GPIOD_BASE_ADDRESS+0x00)))	/*!< GPIO port mode register,               Address offset: 0x00      */
#define GPIOD_OTYPER           (*((volatile u32 *)(GPIOD_BASE_ADDRESS+0x04)))   /*!< GPIO port output type register,        Address offset: 0x04      */
#define GPIOD_OSPEEDR          (*((volatile u32 *)(GPIOD_BASE_ADDRESS+0x08)))   /*!< GPIO port output speed register,       Address offset: 0x08      */
#define GPIOD_PUPDR            (*((volatile u32 *)(GPIOD_BASE_ADDRESS+0x0C)))   /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
#define GPIOD_IDR              (*((volatile u32 *)(GPIOD_BASE_ADDRESS+0x10)))   /*!< GPIO port input data register,         Address offset: 0x10      */
#define GPIOD_ODR              (*((volatile u32 *)(GPIOD_BASE_ADDRESS+0x14)))   /*!< GPIO port output data register,        Address offset: 0x14      */
#define GPIOD_BSRR             (*((volatile u32 *)(GPIOD_BASE_ADDRESS+0x18)))   /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
#define GPIOD_LCKR             (*((volatile u32 *)(GPIOD_BASE_ADDRESS+0x1C)))   /*!< GPIO port configuration lock register, Address offset: 0x1C      */
#define GPIOD_AFRL             (*((volatile u32 *)(GPIOD_BASE_ADDRESS+0x20)))   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
#define GPIOD_AFRH             (*((volatile u32 *)(GPIOD_BASE_ADDRESS+0x24)))


/*=================================================================================
	-----> Macros
			  *  Register Map	 GPIO_E
=================================================================================*/

#define GPIOE_MODER            (*((volatile u32 *)(GPIOE_BASE_ADDRESS+0x00)))	/*!< GPIO port mode register,               Address offset: 0x00      */
#define GPIOE_OTYPER           (*((volatile u32 *)(GPIOE_BASE_ADDRESS+0x04)))   /*!< GPIO port output type register,        Address offset: 0x04      */
#define GPIOE_OSPEEDR          (*((volatile u32 *)(GPIOE_BASE_ADDRESS+0x08)))   /*!< GPIO port output speed register,       Address offset: 0x08      */
#define GPIOE_PUPDR            (*((volatile u32 *)(GPIOE_BASE_ADDRESS+0x0C)))   /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
#define GPIOE_IDR              (*((volatile u32 *)(GPIOE_BASE_ADDRESS+0x10)))   /*!< GPIO port input data register,         Address offset: 0x10      */
#define GPIOE_ODR              (*((volatile u32 *)(GPIOE_BASE_ADDRESS+0x14)))   /*!< GPIO port output data register,        Address offset: 0x14      */
#define GPIOE_BSRR             (*((volatile u32 *)(GPIOE_BASE_ADDRESS+0x18)))   /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
#define GPIOE_LCKR             (*((volatile u32 *)(GPIOE_BASE_ADDRESS+0x1C)))   /*!< GPIO port configuration lock register, Address offset: 0x1C      */
#define GPIOE_AFRL             (*((volatile u32 *)(GPIOE_BASE_ADDRESS+0x20)))   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
#define GPIOE_AFRH             (*((volatile u32 *)(GPIOE_BASE_ADDRESS+0x24)))
/*=================================================================================
	-----> Macros
			  *  Register Map	 GPIO_D
=================================================================================*/

#define GPIOH_MODER            (*((volatile u32 *)(GPIOH_BASE_ADDRESS+0x00)))	/*!< GPIO port mode register,               Address offset: 0x00      */
#define GPIOH_OTYPER           (*((volatile u32 *)(GPIOH_BASE_ADDRESS+0x04)))   /*!< GPIO port output type register,        Address offset: 0x04      */
#define GPIOH_OSPEEDR          (*((volatile u32 *)(GPIOH_BASE_ADDRESS+0x08)))   /*!< GPIO port output speed register,       Address offset: 0x08      */
#define GPIOH_PUPDR            (*((volatile u32 *)(GPIOH_BASE_ADDRESS+0x0C)))   /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
#define GPIOH_IDR              (*((volatile u32 *)(GPIOH_BASE_ADDRESS+0x10)))   /*!< GPIO port input data register,         Address offset: 0x10      */
#define GPIOH_ODR              (*((volatile u32 *)(GPIOH_BASE_ADDRESS+0x14)))   /*!< GPIO port output data register,        Address offset: 0x14      */
#define GPIOH_BSRR             (*((volatile u32 *)(GPIOH_BASE_ADDRESS+0x18)))   /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
#define GPIOH_LCKR             (*((volatile u32 *)(GPIOH_BASE_ADDRESS+0x1C)))   /*!< GPIO port configuration lock register, Address offset: 0x1C      */
#define GPIOH_AFRL             (*((volatile u32 *)(GPIOH_BASE_ADDRESS+0x20)))   /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
#define GPIOH_AFRH             (*((volatile u32 *)(GPIOH_BASE_ADDRESS+0x24)))
/*=================================================================================*/

/*================================================================
	-)Struct : General Purpose I/O
=================================================================*/
typedef struct{
	 volatile u32 MODER  ;  /*!< GPIO port mode register,               Address offset: 0x00      */
	 volatile u32 OTYPER ;  /*!< GPIO port output type register,        Address offset: 0x04      */
	 volatile u32 OSPEEDR;  /*!< GPIO port output speed register,       Address offset: 0x08      */
	 volatile u32 PUPDR  ;  /*!< GPIO port pull-up/pull-down register,  Address offset: 0x0C      */
	 volatile u32 IDR    ;  /*!< GPIO port input data register,         Address offset: 0x10      */
	 volatile u32 ODR    ;  /*!< GPIO port output data register,        Address offset: 0x14      */
	 volatile u32 BSRR   ;  /*!< GPIO port bit set/reset register,      Address offset: 0x18      */
	 volatile u32 LCKR   ;  /*!< GPIO port configuration lock register, Address offset: 0x1C      */
	 volatile u32 AFRL   ;  /*!< GPIO alternate function registers,     Address offset: 0x20-0x24 */
	 volatile u32 AFRH   ;
}GPIOx_t;

/*================================================================
	-)Struct Macros :
			*  Base_Address GPIOA
=================================================================*/
#define MGPIOA        ((GPIOx_t *) GPIOA_BASE_ADDRESS )
/*================================================================
	-)Struct Macros :
			*  Base_Address GPIOB
=================================================================*/
#define MGPIOB         ((GPIOx_t *) GPIOB_BASE_ADDRESS )
/*================================================================
	-)Struct Macros :
			*  Base_Address GPIOC
=================================================================*/
#define MGPIOC        ((GPIOx_t *) GPIOC_BASE_ADDRESS )
/*================================================================
	-)Struct Macros :
			*  Base_Address GPIOD
=================================================================*/
#define MGPIOD       ((GPIOx_t *) GPIOD_BASE_ADDRESS )
/*================================================================
	-)Struct Macros :
			*  Base_Address GPIOE
=================================================================*/
#define MGPIOE         ((GPIOx_t *) GPIOE_BASE_ADDRESS )
/*================================================================
	-)Struct Macros :
			*  Base_Address GPIOH
=================================================================*/
#define MGPIOH        ((GPIOx_t *) GPIOH_BASE_ADDRESS )



#define _LUCKED_PIN 16U
#endif //_GPIO_PRIVATE_H
