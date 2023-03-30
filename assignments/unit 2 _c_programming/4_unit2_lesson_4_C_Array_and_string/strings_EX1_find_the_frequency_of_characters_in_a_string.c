#include <stdio.h>
#include <string.h>
int main() {
  int n = 20 ,i, sum =0;
  char   text[n]  ;
  char character ;
  printf("enter a string");
  gets(text);
  printf("enter a charachter to find frequency");
  scanf("%c", &character);
  for (i = 0; i < n ; i++){
      if (strcmp (text[i] , character) ==0){
          sum += 1 ;
          break ;
      }
  }
  printf("%d", sum);
    return 0;
}

