#include<stdio.h>

void main(){
    int a,b,c,d;
    a=2,b=3,c=1;
    d = ++a || ++b && c++;
    printf("%d %d %d %d",a,b,c,d); // short cricuit evaluate.

}