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
	int i ,j , r ,c  ;
	printf ("enter number of Rows %d " , r);
	scanf("%d" , &r) ;
	printf ("enter number of culomns %d ",c);
	scanf("%d" , &c) ;
	unsigned int Matrix_A [r][c]  , Matrix_B[r][c] ;

	printf("enter numbers of Matrix \n");
	for (i = 0 ; i < r ; i++) {
		for (j = 0 ; j < c  ; j++){
			printf("Enter A %d %d    " , i+1 , j+1);
			fflush(stdin) ;
			scanf("%d" ,&Matrix_A[i][j] );
		}
	}
	printf ("entered matrix \n" );

	for (i = 0 ; i < r ; i++) {
		for (j =0 ;  j < c ; j++){
			printf ("  %d \t " , Matrix_A[i][j] );
		}
	}
	printf ("\new transpose matrix \n" );

	for (i = 0 ; i < r ; i++) {
		for (j =0 ;  j < c ; j++){
			Matrix_B [j][i] = Matrix_A[i][j] ;

		}
	}
	for (i = 0 ; i < r ; i++) {
		for (j =0 ;  j < c ; j++){

			printf ("  %d \t" , Matrix_B[i][j] );

		}
	}

	return 0 ;

}


