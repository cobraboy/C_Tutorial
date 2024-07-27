#include<stdio.h>

//logical Operator

void main(){
    int a;
    a = printf("Vivek") || printf("Sir");
    printf("%d",a);

}
/*  12.5 || ___ - Short cricuit Evaluation
    No matter whether this operand is non-zero,the result is 1. */