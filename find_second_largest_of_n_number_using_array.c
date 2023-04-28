#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, arr[20], large = -1111, second_large = -1234;
    printf("\n Enter the number of elements  in hte array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        printf(" Enter the value of elements in the array %d : ", i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>large)
        large = arr[i];
    }
    for(i=0; i<n; i++)
    {
        if(arr[i] != large)
        {
            if(arr[i]>second_large)
            second_large = arr[i];
        }
    }
    printf("\n  The number you entred are : ");
    for(i=0;i<n;i++)
    {
        printf("\n %d", arr[i]);
    }
    printf("\n The largest number of these numbers  is %d", large);
    printf("\n The second largest number of these numbers  is %d\n\n", second_large);
    return 0;
}