#include<stdio.h>

void swap(int,int);
void main()
{
    int n1,n2;

    printf("Enter a 1st Number n1: ");
    scanf("%d",&n1);
    printf("Enter a 2nd Number n2 : ");
    scanf("%d",&n2);

    printf("%d %d\n",n1,n2);

    swap(n1,n2);
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("%d %d\n",x,y);
}