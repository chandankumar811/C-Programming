#include<stdio.h>
void table(int n);
int main()
{
    int n;
    printf("Enter the number of table: ");
    scanf("%d",&n);
    table(n); // argument *************************************
    return 0;
}
void table(int n) //paramerter /formal parameter **************
{
    int i;
    for (i=1;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,i*n);
    }
}
