#include<stdio.h>

int main()
{
    int l,w;
    printf("Enter a Lenght = ");
    scanf("%d",&l);
    printf("Enter a width = ");
    scanf("%d",&w);
    for(int i=1;i<=w;i++)
    {
        for(int j=1;j<=l;j++)
        {
            if(i==1 || j==1 || i==w || j==l) printf("* ");
            else printf("  ");
        }
        printf("\n");

    }
    return 0;
}