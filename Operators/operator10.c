#include<stdio.h>

void main(){
    int i=3,j;
    j=i++;
    printf("%d %d",i,j);
}
/*  Post-increament(var++)
    1.use the value of variable-(j=i)
    2.increase the value of variable-(i=i+1)*/