#include<stdio.h>
void reverse(char *n );
int main() {
char n[] ;
gets(n);
reverse(n);

    return 0;
}
void reverse( char *n) {
    if (*n != '\0'){
    	reverse(n+1);
    	printf("%c",*n);
    }
}
