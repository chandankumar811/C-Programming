#include<stdio.h>
float convertTemp(float celsius);
int main()
{
 	float celsius;
	printf("Enter temperature");
	scanf("%f",&celsius);
	float temp = convertTemp(celsius);
	printf("The fahrenheit is %f",temp);
	return 0;
}
float  convertTemp(float celsius)
{
	float far = (celsius * (9/5)) +32;
	return far;
}
