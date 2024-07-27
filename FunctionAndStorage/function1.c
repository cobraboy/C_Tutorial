#include<stdio.h>

int mul(int,int);   //forward decleration.
void main()
{
    int a=10,b=20,c;
    c=mul(a,b);     //call/use function.
    printf("%d",c);
}
int mul(int x,int y)
{
    int result;
    result = x*y;       //body/definision of function.
    return result;
}