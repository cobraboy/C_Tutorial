#include <stdio.h>

void square(int n);

int main() {
    int number = 4;

    //call by value
    printf("n is : %d \n",number);
    square(number);
}

void square(int n) {
    n = n * n;
    printf("square is : %d \n",n);
}