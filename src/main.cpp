/** 
 ******************************************************************************
 * @file	: main.cpp
 * @version	: V0.0.1
 * @date	: 2022.06.12
 * @author	: saul.poorman@gmail.com
 ******************************************************************************
 *
 *
 *
 ******************************************************************************
 */

/* Predefined Or Compiler Option ---------------------------------------------*/
#define ENABLE_MAIN_DEBUG_MSG

/* Includes ------------------------------------------------------------------*/
#include "Common.h"

/* Private Typedef -----------------------------------------------------------*/
/* Private Prototype ---------------------------------------------------------*/
/* Private Define ------------------------------------------------------------*/
/* Private Enum --------------------------------------------------------------*/
/* Private Marco -------------------------------------------------------------*/
#if defined(ENABLE_MAIN_DEBUG_MSG) && defined(ENABLE_DEBUG_MSG)
#define DebugMsg(...) \
STATEMENT(\
  printf(__VA_ARGS__);\
  fflush(stdout);\
)
#else
#define DebugMsg(...) {;}
#endif

/* Private Variable ----------------------------------------------------------*/
/* Public Variable -----------------------------------------------------------*/
/* Import Variable -----------------------------------------------------------*/
/* Import Function -----------------------------------------------------------*/
/* Private Class -------------------------------------------------------------*/
/* Public Class --------------------------------------------------------------*/
/* Private Function ----------------------------------------------------------*/
/**
  * @brief	
  * @note	
  * @param	
  * @retval	
  * @return	
  */ 
  
/* Public Function -----------------------------------------------------------*/
/**
  * @brief	
  * @note	
  * @param	
  * @retval	
  * @return	
  */ 

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  DebugMsg("\n\nCompiled @ %s, %s", __DATE__, __TIME__);
  DebugMsg("\nVersion : %s", VERSION);
}

void loop() {
  // put your main code here, to run repeatedly:
}
