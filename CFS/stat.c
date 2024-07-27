#include<stdio.h>
//If-else conditional Statement.
int main() {

    int age;
     
    printf("enter your age : ");
    scanf("%d",&age);

    if(age<18) {
        printf("your are a teenager \n");
    }
    else if(age<12) {
        printf("your are a child \n");
    }
    else{
        printf("you are an adult \n");
    }

    //check if a number is odd or even.

    int number;
    printf("enter a number :");
    scanf("%d",&number);

    if(number % 2 == 0) {
        printf("even number");
    }else{
        printf("odd number");
    }
    return 0;
}