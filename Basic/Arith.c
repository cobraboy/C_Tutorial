#include<stdio.h>
//Arithimatic Instruction

int main() {

    int a=1,b=2,c=3;
    //vaild
    a=b+c;
    printf("%d\n",a);

    //invaild
    //b+c=a;
    
    printf("%d \n", 3 % 2);
    printf("%d \n", -3 % 2);
    
    //Type Conservation
    printf("sum of 2 & 3 : %d\n",2+3);
    printf("sum of 2.0 & 3 : %f\n",2.0+3);
    printf("sum of 2.0 & 3.0 : %f\n",2.0+3.0);

    //Associativity
    printf("output : %d\n",5+2/2*3);

     return 0;
}