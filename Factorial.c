#include <stdio.h>

void Factorial (int num)
{
    int fact=1,i;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("fact=%d ",fact);
}

int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    Factorial(num);
}