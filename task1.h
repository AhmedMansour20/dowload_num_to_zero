/************************ File gaurd start ***********/
#ifndef TASK1_H
#define TASK1_H
/************************ Data type section start ***********************/
#define CPU_TYPE_8  8 
#define CPU_TYPE_16 16
#define CPU_TYPE_32 32 
#define CPU_TYPE_64 64

#define CPU_TYPE (CPU_TYPE_8)

#if (CPU_TYPE == CPU_TYPE_8)
	typedef unsigned char uint8;
	typedef unsigned short uint16;
	typedef unsigned long uint32;
#elif (CPU_TYPE == CPU_TYPE_16)
#elif (CPU_TYPE == CPU_TYPE_32)
#elif (CPU_TYPE == CPU_TYPE_64)
	typedef unsigned char uint8;
	typedef unsigned short uint16;
	typedef unsigned long uint64;
#endif
typedef struct usedData{ //data storage declaratiion.
	uint8 number;// entered number
	uint8 counter;//steps number counter 
} usedDat_t; 
typedef enum digits{ //data storage for 1, 2.
	one = 1,
	two
}digits_e; 

/************************ Data type section end **************************/
/************************ Macros section start ************************************/
#define ZERO 0
/************************ Macros section end *********************************************/
/************************ Include section start ************************************/
#include <stdio.h>
#include<windows.h>
/************************ Include section end   ************************************/
/****** ****************** Sub-program declaration start **********************************/
/** 
************************************
* @func.name:	numberOfStepsToZero
* @task     :   counting numbers of steps to reduce 
				the entered number to 0
* @return   :	no return (void)
************************************
*/
void numberOfStepsToZero(void);
/************************ Sub-program declaration end ************************************/

/************************ File gaurd end ***********/
#endif   
	
	 
