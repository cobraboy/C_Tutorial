#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("* ");
        }
        for(int m=1;m<=n-i;m++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}