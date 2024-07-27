#include<stdio.h>

void main()
{
    int a=10,b=20,c;
    c=mul(a,b);     //by default asume int.
    printf("%d",c);
}
int mul(int x,int y)
{
    int result;
    result = x*y;       
    return result;
}