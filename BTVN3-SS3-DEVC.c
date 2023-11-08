#include <stdio.h>
int main(){
	float point_math, point_literature, point_english;
	printf("nhap diem toan, nhap diem van, nhap diem anh");
	scanf("%f %f %f", &point_math, &point_literature, &point_english);
	float total = point_math + point_literature + point_english, medium = total / 3;
	printf("Tong diem: %f Diem trung binh: %f", total, medium); 
} 
