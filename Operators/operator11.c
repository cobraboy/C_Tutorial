#include<stdio.h>
//Bitwise Operator
/*  1.Bitwise OR(|)
    2.BItwise AND(&)
    3.Bitwise XOR(^)
    4.Bitwise NOT(~)
    5.Bitwise Left Shift(<<)
    6.Bitwise Right Shift(>>)   */

void main(){
    //Bitwise OR.

    int a=3,b=11,c;
    c=a|b;
    printf("%d \n",c);   //bitwise or - bigger value output 


//Bitwise AND.

    int a1=17,b1=22,c1;
    c1 = a1&b1;
    printf("%d \n",c1);

//Bitwise XOR.
/*  0^0 = 0
    1^1 = 0
    0^1 = 1
    1^0 = 1 */

    int a2=13,b2=20,c2;
    c2 = a2^b2;
    printf("%d \n",c2);


//Bitwise Left Shift(<<).

    int a3;
    a3 = 10<<1; //10*2^1. or 10*2
    printf("%d \n",a3);


//Bitwise Right Shift(>>).

    int a4;
    a4 = 10>>1;
    printf("%d",a4);

}