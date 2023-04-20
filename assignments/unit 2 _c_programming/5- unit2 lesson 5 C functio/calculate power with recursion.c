#include<stdio.h>
int calc_power(int n , int k );
int main() {
int n =3,k=3;
printf("%d",calc_power(n,k));
    return 0;
}
int calc_power(int n , int k) {
    if (k>0){
     return n*calc_power(n,k-1);
    }else{
       return 1;
      
      }

}
