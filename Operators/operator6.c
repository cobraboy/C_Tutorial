#include<stdio.h>

//Relation Operator
// Result is Yes(1) / No(0)
/*  Precedence      Associativiy
    unary +,-       L to R
    1.%,*,/         L to R
    2.+,-           L to R
    3.<,<=,>=,>     L to R
    4.!=,==         L to R
    5.=             R to L                 */

void main()
{
    printf("%d \n",10>20);
    printf("%d \n",10<=10);
    printf("%d \n",20<=10);
    printf("%d \n",20>=10);
    printf("%d \n",10>=10);
    printf("%d \n",10==10);
    printf("%d \n",10==20);
    printf("%d \n",10!=10);
    printf("%d \n",10!=20);
}