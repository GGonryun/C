#include <stdio.h>
#include <limits.h>
#include <float.h>

main() {

printf("signed char min: %d. \n signed char max: %d. \n",SCHAR_MIN, SCHAR_MAX);
printf("unsigned char min: %d. \n unsigned char min: %d \n", 0, UCHAR_MAX);
printf("short int min: %d. \n short int max: %d \n", SHRT_MIN, SHRT_MAX);
printf("unsigned short int min: %d. \n unsigned short int max: %d. \n",0,USHRT_MAX);
printf("int min: %d. \n int max: %d. \n",INT_MIN,INT_MAX);
printf("unsigned int min: %d. \n unsigned int max: %d. \n", 0, UINT_MAX);
printf("long int min: %d. \n long int max: %d. \n", LONG_MIN, LONG_MAX);
printf("unsigned long int min: %d. \n unsigned long int max: %d. \n", 0, ULONG_MAX);
printf("float min: %0.10e. \n float max: %0.10e. \n", FLT_MIN, FLT_MAX);

}
