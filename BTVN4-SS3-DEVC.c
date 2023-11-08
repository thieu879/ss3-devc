#include <stdio.h>
int main(){
	int number1, number2, number3;
	printf("So 1: So 2: So 3:");
	scanf("%d %d %d ",&number1,&number2,&number3);
	int max = number1;
	int min = number1;
	max = (max < number2) ? number2 : max;
	max = (max < number3) ? number3 : max;
	min = (min > number2) ? number2 : min;
	min = (min > number3) ? number3 : min;
	printf("Gia tri max là: %d", max);
	printf("gia tri min la: %d", min); 
} 
