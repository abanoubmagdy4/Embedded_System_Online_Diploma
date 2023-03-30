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
    return 0 ;
}
