#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0,n,arr[20];
    // clrscr();
    printf("Enter the number of array:-");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("The array elements are\n");
    for(i=0;i<=n;i++)
    {
        printf("arr[%d] = %d\t",i,arr[i]);
    }
        return 0;
}