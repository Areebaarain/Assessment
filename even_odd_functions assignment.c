#include<stdio.h>

void odd_even_check(int num){
	if(num %2==0){
		printf("the number is even/n");
	}
	else{
		printf("the number is odd\n");
	}
}

int main(){
	int number;
	printf("enter a number:");
	scanf("%d",&number);
	odd_even_check(number);
	return 0;
}