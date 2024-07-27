#include<stdio.h>

void main()
{
    int x,y,z;
    printf("Enter 1st number : ");
    scanf("%d",&x);
    printf("Enter 2nd number : ");
    scanf("%d",&y);
    printf("Enter 3rd number : ");
    scanf("%d",&z);

    if(x>y && x>z)
        printf("%d",x);
    else
    {
        if(y>z)
            printf("%d",y);
        else
            printf("%d",z);
    }
}