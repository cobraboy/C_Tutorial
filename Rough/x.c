#include<stdio.h>

int main() 
{

    int n;
    printf("Enter n = ");
    scanf("%d", &n);
    for(int i=2*n-1; i>=1; i--)
    {
        for(int j=2*n-1; j>=1;j--)
        {
            if(abs(n-i)>abs(n-j))
            {
                printf("%d ", abs(n-i)+1);
            }
            else
            {
                printf("%d ", abs(n-j)+1);
            }
        }
        printf("\n");
    }
    return 0;
}
