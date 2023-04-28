#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, arr[20], small= 1234;
    /*Note we have assigned large with a very small value so that any value in the array is assured to be greater than this value*/
    printf("\n Enter the number of elements in the array: ");
    scanf("%d", &n);
    for(i=0;i<=n;i++)
    {
        printf("Enter the elements of array: ");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(arr[i]<small)
        small = arr[i];
    }
    printf("\n The smallest number is: %d", small);
    return 0;
}