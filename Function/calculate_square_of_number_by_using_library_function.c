#include<stdio.h>
#include<math.h>
int Power(int n);
int main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	int  squ = Power(n); //  by return value*****************************
	printf("The square of number is %d",squ);
	return 0;
}
int Power(int n)
{
	return  pow(n,2);
}
