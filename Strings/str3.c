#include<stdio.h>

void main()
{
    char arr[3]={'R','a','m'}; //error is 4 insread of 3 bcz \0 is count.
    printf("%s",arr);

    printf("\n");

    char ar[4]={'R','a','m'};  // one space for \0.
    printf("%s",ar);
}