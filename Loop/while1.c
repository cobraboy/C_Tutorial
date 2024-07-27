#include<stdio.h>

void main()
{
    int i=0;
    while(i++) //no output bcz expression is false(0).
    {
        printf("%d",i);
    }
}