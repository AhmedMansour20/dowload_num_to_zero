/** 
************************************
* @file     : task1.c
* @author   : Ahmed Manour
* @brief    : test functions
************************************
*/
/************************ Include section start ***********/
#include "task1.h"
/************************ Include section end  ***********/
/********** Main-program section start********************/
int main( void ){
	/* counting numbers of steps to reduce 
	   the entered number to zero 
	*/
	numberOfStepsToZero();
}
/********** Main-program section end ********************/

/********** Sub-program section start ********************/

/** 
************************************
* @func.name:	numberOfStepsToZero
* @task     :   counting numbers of steps to reduce 
				the entered number to 0
* @return   :	no return (void)
************************************
*/
void numberOfStepsToZero(void){
usedDat_t vars = { // data storage initialization.
	ZERO,  // entered number initialization.
	ZERO   // counter initialization.
};
    // for user onterfacing
    printf("counting numbers of steps to reduce");
    printf(" the entered number to zero");
    printf("Enter Integer Number : ");//Interfacing with user
	scanf("%i", &vars.number); //Get integer value from user
	while(vars.number >= one){ //Loop till vars.number reach to 1
		if ( (vars.number % two) == ZERO ){ //check even status
			/* 	divide number by 2 equivelant to
				vars.number /= 2; equivelant to 
				vars.number = (vars.number>>1);
			*/
			vars.number >>= one; //divide vars.number by 2
			vars.counter++;      //increase counter by 1
		}else if( (vars.number % two) != ZERO ){//chek odd status
			vars.number--;  //decrease counter by 1
		    vars.counter++; //increase counter by 1
		}
	}
	printf("counter = %i", vars.counter);
}
/*********** Sub-program section end *******************/

/** 
******************************************
  user         date         brief
******************************************
ahmed mansour 25jan2023    fun
*/
























/*
static uint8* return_arr();

const uint8 *s1 = "ahmed mansour";
// -------------------------------------------------
uint8 v3 = 5;
uint8 v4 = 20;
//uint8 *p;
//uint8 **pp;
//p = &v1;
//pp = &p;
uint8* i= &v3;
uint8* j= &v4;
//i = &V3;
//j = &V4;

int main( void ){
	//*i = *i**j;
	//*i *= (*j);
	//printf("*i = %i", *i);
/*
    const uint8 *s2 = "esraa hamed";
    //*s1 = 'w';
    //*s2 = 'h';
	printf("s =  %s\n", s1 );
	printf("s =  %s\n", s2 );
	//--------------------------------------
	printf("p adrss 0x%X\n", p);
	printf("pp adrss 0x%X\n", pp);
	//--------------------------------------
	//printf("p adrss %i\n", *p);
	//printf("pp adrss %i\n", **pp);
    //-------------------------------------*/
	//uint8* arr = return_arr();
    //printf("arr0 %i\n", *arr);
	/*
	uint8 c = 0;
	
    uint8 arr2[] = {60, 30, 45, 55, 65};
    uint8 arr3[3][3] = {  {10, 20, 30},
	                      {40, 50, 60},
					      {70, 80, 90}
					   };
    uint8* ptr = (uint8 *)arr3;
	// arr1++;ERROR
	for (c = 0; c < 5; c++){
		printf("arr1[c] %i\n", arr2[c] );//arr2[c] OR *(arr2 + c)
	}
	printf("\narr3[3] %i\n", arr3[3] );
	printf("\narr3[3] %i\n", &arr3[0][3]);
	printf("----------------------------\n");
	printf("\naddress %i\n", arr3);
	printf("\naddress %i\n", arr3[0]+0 );
	printf("\naddress %i\n", &arr3[0][0] );
	printf("-----------usin pointers -------\n");
	printf("\n*ptr %i\n", *ptr);
	printf("----rows first element-------\n");
	printf("\n*ptr %i\n", **arr3);
	printf("\n*ptr %i\n", **(arr3+1));
	printf("\n*ptr %i\n", **(arr3+2));
	printf("----using *(*(arrN+r) + c) \n");
	printf("\n*ptr %i\n", *(*(arr3+0) + 0) );
	printf("\n*ptr %i\n", *(*(arr3+1) + 1) );
	printf("\n*ptr %i\n", *(*(arr3+2) + 2) );
	printf("\n*ptr %i\n", *(*(arr3+3) + 3) );
	printf("------------------------------\n");
	uint8 idx1 = 0;
	uint8 idx2 = 0;
	for(idx1 = 0; idx1 < 3; idx1++){
		for(idx2 = 0; idx2 < 3; idx2++){
			//printf(" %i", *(*(arr3+idx1)+idx2));
			printf(" %i", *((arr3[idx1])+idx2) );
		}
		printf("\n");
	}
	printf("------- array of string ----------\n");
	uint8 *

	
	
}

static uint8* return_arr(){
	static uint8 arr1[] = {11, 12, 13, 14, 15};
return arr1; 
}
*/