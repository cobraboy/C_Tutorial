#include <stdio.h>

int main() {

    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    float sum=0,fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(1/fact);
    }
    printf("Sum = %f",sum);

    return 0;
}