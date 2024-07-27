#include<stdio.h>

int sum_digit(int n)
{
    if(n<10)
    {
        return n ;
    }
    else
    {
        return n % 10 + sum_digit(n/10);
    }
}
void main()
{
    int n,x;
    printf("Enter a number : ");
    scanf("%d",&n);

    x=sum_digit(n);
    
    printf("%d",x);
}