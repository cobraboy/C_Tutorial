#include<stdio.h>

int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)  //for spaces .....
        {
            printf("  ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d ",k);
        }
        for(int m=i-1;m>=1;m--)
        {
            printf("%d ",m);
        }
        //Another Way...
        // int a=i-1;
        // for(int m=1;m<=i-1;m++)
        // {
        //     printf("%d ",a);
        //     a--;
        // }
        printf("\n");
    }
    return 0;
}