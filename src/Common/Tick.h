/** 
 ******************************************************************************
 * @file Tick.h
 * @version V0.0.1
 * @date 2022.06.12
 * @author saul.poorman@gmail.com
 ******************************************************************************
 *
 *
 *
 ****************************************************************************** 
 */ 
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _TICK_H_
#define _TICK_H_

/* Compiler option */
#ifdef __cplusplus
extern "C" {
#endif

/* Include head file */

/* Predefined Marcos */

/* Typedef */
typedef unsigned long tick_t;

/* Marcos definition or enum*/
#define _us(x)	((tick_t)x)
#define _ms(x)	((tick_t)((_us(1000))*(x)))
#define _sec(x)	((tick_t)(_ms(1000)*x))
#define _min(x)	((tick_t)(_sec(60)*x))
#define _hour(x)	((tick_t)(_min(60)*x))

#define SetTick(tick, _ms) \
STATEMENT( \
  (tick) = micros(); \
  (tick) += (_ms); \
)

/* Public variable */
/* Public Function */
bool TickIsTimeout(tick_t endTick);
void Sleep(tick_t _ms);

#ifdef __cplusplus
}
#endif

#endif
