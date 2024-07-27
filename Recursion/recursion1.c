#include<stdio.h>

void Print(int n)
{
    if(n==1)
    {
        printf("Vivek");
    }
    else
    {
        printf("Vivek \n");
        Print(n-1);
    }
}
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    Print(n);
}