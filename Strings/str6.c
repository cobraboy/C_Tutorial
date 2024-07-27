#include<stdio.h>

void main()
{
    char name[]="Vivek";

    printf("%c \n",*(name+1));
    printf("%c \n",name[1]);    //when we print only selected char of string use '%c'. 
} 