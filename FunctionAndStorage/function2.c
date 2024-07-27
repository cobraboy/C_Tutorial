#include<stdio.h>

mul(int,int);   //by default int asume.
void main()
{
    int a=10,b=20,c;
    c=mul(a,b);     
    printf("%d",c);
}
int mul(int x,int y)
{
    int result;
    result = x*y;       
    return result;
}