#include<stdio.h>

void main()
{
    for(int i=1;i<=10;i++)
    {
        if(i % 4 == 0)
            continue;
        printf("%d \t",i);
    }
}