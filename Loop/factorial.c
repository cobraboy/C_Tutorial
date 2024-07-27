#include<stdio.h>

void main() {
    int Prod=1,n;

    printf("Enter a Number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        Prod=Prod*i;
    }
    printf("%d",Prod);
}