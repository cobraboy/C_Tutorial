#include<stdio.h>

void main() {
    int n;
    printf("Enter a digit : ");
    scanf("%d",&n);
    {
        for(int i=1;i<=10;i++)
        {
            printf("%d \t",n*i);
        }
        printf("\n");
    }
}