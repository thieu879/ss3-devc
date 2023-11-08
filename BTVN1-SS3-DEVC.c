#include <stdio.h>
int main(){
	float radius ;
	printf("nhao vao so ban kinh:");
	scanf("%f",&radius);
	float perimeter = 2 * 3.14 * radius, area = radius * 3.14 * radius;
	printf("Chu vi hinh tron la: %f - Dien tich hinh tron la: %f", perimeter, area);
}
	
