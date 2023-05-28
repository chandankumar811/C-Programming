/*write a program that print namesta if user is Indian and Bonjour if user is French.*/
#include<stdio.h>
void namaste();
void bonjour();
int main()
{
    printf("Enter 'I' if user is Indian and Enter 'F' if user is Frenchian: ");
    char ch;
    scanf("%c", &ch);
    if(ch =='i')
    {
        namaste();
    }
    else
    {
        bonjour();
        
    }
    return 0;
}
    void namaste()
{
    printf("Namaste sir..");
}
    void bonjour()
{
    printf("Bonjour sir..");
}