#include <stdio.h>

int main() {

    int a,n=1,i;
    printf("enter a :  ");
    scanf("%d",&a);

    for(i=1;i<=a;i++){
        n=n*i;
    }    
    printf("Factorial of a : %d ",n);
    return 0;
}