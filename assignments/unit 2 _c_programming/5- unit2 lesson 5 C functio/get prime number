#include <stdio.h>
void prime_number (int low , int high);
int main (){
	int low , high ;
	printf("Enter two numbers(intervals): ");
	scanf("%d %d", &low, &high);
	printf("Prime numbers between %d and %d are: ", low, high);
	prime_number(low , high);

	return 0 ;
}

void prime_number(int low , int high ){
	int  i, flag;

	while (low < high) {
		flag = 0;

		if (low <= 1) {
			++low;
			continue;
		}

		for (i = 2; i <= low / 2; ++i) {

			if (low % i == 0) {
				flag = 1;
				break;
			}
		}

		if (flag == 0){
			printf("%d ", low);
		}
		printf("%d   ",low);
		++low;

	}

}



