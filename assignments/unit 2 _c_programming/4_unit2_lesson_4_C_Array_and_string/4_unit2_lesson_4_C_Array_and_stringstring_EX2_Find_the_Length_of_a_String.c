#include <stdio.h>
int main() {
	int  i ,sum=0;
	char ar[25] ;
	printf("enter your text ");
	gets(ar);
	for (i=0 ; i<25 ; i++ ){
		if (ar[i]==0){
			break;}
		sum += 1 ;
	}

	printf ("number of length = %d" , sum);

	return 0;
}
