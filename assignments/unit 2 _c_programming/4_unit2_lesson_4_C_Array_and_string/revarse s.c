#include <stdio.h>
#include <string.h>
int main() {
	int  i ,j,sum=0 , n;
	char ar[25] , arr[25];
	printf("enter your text ");
	gets(ar);
    n =	strlen(ar);
	for (i=0 ; i <n; i++ ){
	       j = n ;
	        	     arr[j] = ar[i] ;
	        	     j-- ;
	    }
	

printf("%s" ,arr);

	return 0;
}
