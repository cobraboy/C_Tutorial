#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        int ch=65;
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%c ",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}