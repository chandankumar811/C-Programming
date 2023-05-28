#include<stdio.h>
void calculatePrize(float value);
int main()
{
	float value;
	printf("Enter Prize : ");
	scanf("%f",&value);
	calculatePrize(value); // Changes to parameters in function don't change the value in call function.
	return 0;
}
void calculatePrize(float value)
{
	float total_prize =	value+(0.18*value);
	printf("The total prize is %.2f.",total_prize);
}

