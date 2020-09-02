#include<stdio.h>
int main() {
	float a;
	printf("Enter temperature in degrees Celsius : ");
	scanf_s("%f", &a);
	printf("%.2f degrees Celsius is equal to %.2f degree Fahrenheit.", a, (9 * a / 5) + 32);
	return 0;
}