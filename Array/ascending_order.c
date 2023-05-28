#include<stdio.h>
void reversesentence();
int main()
{
    printf("Enter a sentence:-");
    reversesentence();
    return 0;
}
void reversesentence()
{
    char c;
    scanf("%c",&c);
    if(c!='\n')
    {
        reversesentence();
        printf("%c",c);
    }
}
