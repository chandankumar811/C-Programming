#include<stdio.h>
int sum(int n);
int main()
{
	int n;
	printf("Enter the value of n: ");
	scanf("%d",&n);
	int totalsum= sum(n);
	printf("The total sum of 1st n number of natural number are %d",totalsum);
	return 0;
}
//recursive function
int sum(int n)
{
	if(n==1)
	{
		return 1;
	}
	int sum1 = sum(n-1); // sum of 1 to n
	int sumN = sum1+n;
	return sumN;
}
