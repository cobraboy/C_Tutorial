#include<stdio.h>

void main()
{
    double a=10.2,b=13.6,c;
    c=mul(a,b);     
    printf("%d",c);
}
double mul(double x,double y)
{
    double result;
    result = x*y;       
    return result;      //mismatch the function type so compiler give error.
}