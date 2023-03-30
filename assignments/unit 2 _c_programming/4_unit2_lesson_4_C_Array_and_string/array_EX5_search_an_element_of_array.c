/*
Mastering Embedded System - Online Diploma
Learn In Depth -- by eng keroles shenouda
        assignments - Home work 3
    4_unit2_lesson_4_C_Array_and_string
    EX5_search_an_element_of_array
    author : Abanoub Magdy Nessiem
 */

#include <stdio.h>
int main() {
    int i , n=5,e=25,l=5  ;
    printf ("enter number of elements : ");
    scanf("%d" , &n);
    int Matttrix [n];
    for(i = 0 ; i < n ; i++){
        printf ("enter element number %d   " , i+1);
        scanf ("%d", &Matttrix[i]);
    }
    printf("\n");
      for(i = 0 ; i < n ; i++){
      printf("%d " , Matttrix[i]);
    }
    printf("\n");
    printf ("enter the element to be searched ");
    scanf ("%d" , &e);
    for (i=0 ; i < n ; i++){
        if (Matttrix[i] == e){
            printf ("number found at the location = %d" , i+1);
            break ; 
        } 
     
    } 
        if(i == n){
        printf("your number not found , sorry !!!");
        }
    return 0 ;
}
