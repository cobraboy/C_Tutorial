#include<stdio.h>

void main()
{
    int n=0,a;
    printf("Entre a Number : ");
    scanf("%d",&a);
    
    for(int i=1;i<=a;i++)
    {
        n=n+i;
    }
        printf("sum up to %d : %d",a,n);
}