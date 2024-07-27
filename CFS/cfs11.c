#include<stdio.h>

//Switch is a selection statement.
//only consist integer and alphabate which contain assic value like A=65 etc...
//duplicate case lable are not allowed.
//switch allows range like 65......90.

void  main()
{
    int i=2;
    switch(i){
        case 1 : printf("1 \n");
                break;
        case 2 : printf("2 \n");
                break;
        default : printf("default \n");
    }

    printf("\n");

    int n=2;
    switch(2){
        case 2 : printf("2 \n");

        case 1 : printf("1 \n");

        default : printf("default");
    }

}
