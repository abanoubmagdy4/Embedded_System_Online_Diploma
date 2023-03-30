/*
Mastering Embedded System - Online Diploma
Learn In Depth -- by eng keroles shenouda
        assignments - Home work 3
    4_unit2_lesson_4_C_Array_and_string
    EX2_calculate_average_using_array
    author : Abanoub Magdy Nessiem
 */
#include <stdio.h>
int main() {
	int i , n ,e,l ,Matrix[n] ;
	fflush(stdin); fflush(stdout);
	printf ("enter number of elements : ");
	scanf("%d" , &n);
	for(i = 0 ; i < n ; i++){
		Matrix[i] = (i+1);
			fflush(stdin); fflush(stdout);

		printf ("%d\n", Matrix[i]);
	}
		fflush(stdin); fflush(stdout);

	printf ("enter the element to be inserted ");
	scanf("%d" , &e);
	printf ("enter the Location");
	scanf("%d" , &l);
Matrix[l-1] = e ; 
	for(i = 0 ; i < n ; i++){
	    	fflush(stdin); fflush(stdout);

		printf ("%d", Matrix[i]);
	}

return 0 ;
}
