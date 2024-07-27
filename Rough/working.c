#include<stdio.h>

void main()
{
    int std[2][3],total=,avg[2];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("Enter the mark of sub %d for student %d = ",j+1,i+1);
            scanf("%d",&std[i][j]);
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            total[i]=total[i]+std[i][j];
            avg[i]=total[i]/3;
        }
    }
    printf("math    pps     dsa     total     avg  \n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d\t",std[i][j]);
        }
        printf(" %d      %d \n",total[i],avg[i]);
        printf("\n");
    }
}