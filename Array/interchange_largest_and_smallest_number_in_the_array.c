#include<stdio.h>
#include<conio.h>
int main()
{
    int i, n, arr[20], temp;
    int small = 9999, small_pos = 0;
    int large = -9999, large_pos = 0;
    printf("\n Enter the number of elements in the array: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter the value of element %d :", i);
        scanf("%d", &arr[i]);
    }
    for(i=0;i<=n;i++)
    {
        if(arr[i]<small)
        {
            small = arr[i];
            small_pos = i;
        }
        if(arr[i]>large)
        {
            large = arr[i];
            large_pos = i;
        }
    }
    printf("\n The smallest of these numbers is : %d",  small);
    printf("\n The  position of the smallest number in the array is %d",  small_pos);
    printf("\n The largest of these numbers is : %d", large);
    printf("\n The position of the largest number in the srray is %d", large_pos);
    temp = arr[large_pos];
    arr[large_pos] =  arr[small_pos];
    arr[small_pos] = temp;
    printf("\n The new array is : ");
    for(i=0;i<n;i++)
    {
        printf("\n arr[%d] = %d", i, arr[i]);
    }
    return 0;
}