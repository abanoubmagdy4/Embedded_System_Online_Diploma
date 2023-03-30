/*
Mastering Embedded System - Online Diploma
Learn In Depth -- by eng keroles shenouda
        assignments - Home work 3
    4_unit2_lesson_4_C_Array_and_string
        EX1_multidimensional_array
    author : Abanoub Magdy Nessiem

 */

#include <stdio.h>
int main() {
	int i ,j  ;
	unsigned int Matrix_A [2][2]  , Matrix_B[2][2] , sumMatrix[2][2] ;
	printf("enter numbers of Matrix_A\n");
	for (i = 0 ; i < 2 ; i++) {
		for (j = 0 ; j <2  ; j++){
			printf("Enter A %d %d    " , i+1 , j+1);
			fflush(stdin) ;
			scanf("%d" ,&Matrix_A[i][j] );
		}
	}
	printf("enter numbers of Matrix_B\n");
	for (i = 0 ; i < 2 ; i++) {
		for (j = 0 ; j <2  ; j++){
			printf("Enter B %d  %d    " , i+1 , j+1);
			fflush(stdin) ;
			scanf("%d" ,&Matrix_B[i][j] );
		}
	}
	// Sum of two matrix
	for (i = 0 ; i < 2 ; i++) {
		for (j = 0 ; j <2  ; j++){
			sumMatrix[i][j] = Matrix_A[i][j] + Matrix_B[i][j];
		}
	}
	//print result of addition
	printf("result of addition\n");
	for (i = 0 ; i < 2 ; i++) {
		for (j = 0 ; j <2  ; j++){
			printf("%d \n", sumMatrix[i][j] );
		}
	}

	return 0 ;

}


