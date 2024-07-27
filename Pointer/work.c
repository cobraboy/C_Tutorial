#include <stdio.h> 

void doWork(int a,int b,int *sum,int *prod,int *avg);

int main() {
    int a,b;
    printf("enter number a : \n");
    scanf("%d",&a);
    printf("enter number b : \n");
    scanf("%d",&b);

    int sum,prod,avg;
    doWork(a,b,&sum,&prod,&avg);

    printf("sum = %d \nprod = %d \navg = %d \n",sum,prod,avg);
    return 0;
}
//call by value (a,b) or reference (sum,prod,avg)
void doWork(int a,int b,int *sum,int *prod,int *avg) {
    *sum=a+b;
    *prod=a*b;
    *avg=(a+b)/2;
}