#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d integers : ",n);
    //for input
    for(int i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    //for sum 
    sum=*a;
    for(int i=1;i<=n-1;i++)
    {
        sum=sum + a[i];
    }
    printf("Sum = %d",sum);
    
    return 0;
}