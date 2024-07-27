#include <stdio.h>

void printNumber(int arr[],int n); //int n is must not required without int n program is run.

int main() {
    int arr[3];
    int *ptr=&arr;

    //input
    for(int i=0; i<3; i++){
        printf("Enter a Number : ");
        scanf("%d",&arr[i]);
    }
    printNumber(arr,3);

    return 0;
}
//definition & output
void printNumber(int arr[],int n) {
    for(int i=0; i<3; i++) {
        printf("%d \t",arr[i]);
    }
}