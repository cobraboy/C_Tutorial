#include<stdio.h>

// % Modulas Operator
// a % b : Reminder when a is didvided by b.
/* Note:-
    1.both operands of operators must be int type otherwise error.
    2.Sign of result of % operator will as of 1st operand.
        -ve % +ve = -ve         +ve % +ve = +ve
        -ve % -ve = -ve         +ve % -ve = +ve         */

        void main()
        {
            int a;
            a = -15 % 7;
            printf("%d \n",a);

            printf("%d \n",14 % 5);
            printf("%d \n",12 % 2);
            printf("%d \n",2 % 5);
            printf("%d \n",3 % 7);

        }