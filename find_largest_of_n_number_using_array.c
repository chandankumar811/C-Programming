#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, arr[20], large= -1111;
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
        if(arr[i]>large)
        large = arr[i];
    }
    printf("\n The largest number is: %d", large);
    return 0;
}