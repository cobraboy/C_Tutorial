#include<stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int a=1,b=65;
        for(int j=1;j<=i;j++)
        {
            if(i%2 != 0)
            {
                printf("%d ",a);
                a++;
            }
            else
            {   
                printf("%c ",b);
                b++;
            }
        }
        printf("\n");
    }
    return 0;
}