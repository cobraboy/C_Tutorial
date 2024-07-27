#include <stdio.h>

void square(int *n);

int main() {
    int x = 5;

    //call by reference
    square(&x); //address of x
    printf("n is : %d \n",x);
    return 0;
}
void square(int *n){
    *n = *n * *n; //x=x*x
    printf("square is : %d \n",*n);
}