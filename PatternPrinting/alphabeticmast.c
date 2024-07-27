#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++) //for spaces..
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            char ch=(char)(k+64);
            printf("%c ",ch);
        }
        for(int m=i-1;m>=1;m--)
        {
            char ch=(char)(m+64);
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}