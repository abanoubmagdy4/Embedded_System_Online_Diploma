/*
Mastering Embedded System - Online Diploma
Learn In Depth -- by eng keroles shenouda
        assignments - Home work 3
    4_unit2_lesson_4_C_Array_and_string
    EX4_insert_an_element_in_an_array.c
    
    author : Abanoub Magdy Nessiem
 */
#include <stdio.h>
int main() {
	int i , n=5,e=25,l=5  ;
	printf ("enter number of elements : ");
	scanf("%d" , &n);
	int Matttrix [n];
	for(i = 0 ; i < n ; i++){
		Matttrix[i] = (i+1);
		fflush(stdin); fflush(stdout);

		printf ("%d\n", Matttrix[i]);
	}

	printf ("enter the element to be inserted ");
	scanf("%d" , &e);
	printf ("enter the Location");
	scanf("%d" , &l);
	Matttrix[l-1] = e ;
	for(i = 0 ; i < n ; i++){

		printf ("%d  ", Matttrix[i]);
	}

	return 0 ;
}
