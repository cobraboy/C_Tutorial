#include<stdio.h>

void main(){
    int i=4,j;
    j=++i + ++i + i++;
    printf("%d %d",i,j);
}
// According to C-Standard - side effect and sequence points.