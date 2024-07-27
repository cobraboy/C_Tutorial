#include<stdio.h>

void main()
{
    printf("1");
    if(10!=10)      //condition false so 1st semicolan printf is not print.
        printf("2");
        printf("3");
    printf("4");
}