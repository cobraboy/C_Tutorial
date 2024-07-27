#include<stdio.h>

void  main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=n+1;i<=2*n-1;i++)
    {
        for(int j=2*n-1;j>=i;j--)
        {
            if((i+j) % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}