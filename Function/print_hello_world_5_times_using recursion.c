#include<stdio.h>
void printHelloWorld(int count);
int main()
{
	printHelloWorld(20);
	return 0;
}
void printHelloWorld(int count)
{
	if(count == 0)
	{
		return;
	}
	printf("Hello World\n");
	printHelloWorld(count-1);
}
