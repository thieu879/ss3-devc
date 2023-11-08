#include <stdio.h>
int main(){
	int thousand_digit, hundred_digit, dozend_digit, unit_digit;
	printf("Nhap so hang nghin:");
	scanf("%d", &thousand_digit);
	printf("Nhap so hang tram:");
	scanf("%%d", &hundred_digit);
	printf("Nhap so hang chuc:");
	scanf("%d", &dozend_digit);
	printf("Nhap so hang don vi:");
	scanf("%d", &unit_digit);
	int total = thousand_digit + hundred_digit + dozend_digit + unit_digit;
	int reverse = unit_digit*1000 + dozend_digit*100 + hundred_digit*10 + thousand_digit;
	printf ("tong cac chu so là %d\n", total);
	printf("so dao nguoc la %d", reverse); 
} 
