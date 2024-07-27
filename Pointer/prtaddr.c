#include <stdio.h>
 void printAddress(int *n);

 int main() {
    int n=8;
    printAddress(&n);
    printf("address of n is : %u \n",&n);
    return 0;
 }
 //call by reference
 void printAddress(int *n) {
    printf("address of *n is : %u \n",&(*n));
 }