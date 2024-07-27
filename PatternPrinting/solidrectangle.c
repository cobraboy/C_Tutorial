#include<stdio.h>

int main()
{   
    int n,m;
    printf("Enter a number of raws : ");
    scanf("%d",&n);
    printf("Enter a number of column : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++) //outer loop ->no. of line(raw)
    {
    for(int i=1;i<=m;i++)  //inner loop ->no. of stars in each line(column)
        printf("*  ");
        printf("\n");    
    }
    return 0;
}