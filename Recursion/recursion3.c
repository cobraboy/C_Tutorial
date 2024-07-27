#include<stdio.h>

int Pow(int a,int n)
{
    if(n==1)
    {
        return a;
    }
    else
    {
        return a * Pow(a,n-1);
    }
}
void main()
{
    int a,n,i;
    printf("Enter base a : ");
    scanf("%d",&a);
    printf("Enter power n : ");
    scanf("%d",&n);

    i=Pow(a,n);
    printf("%d power %d is %d",a,n,i);
}