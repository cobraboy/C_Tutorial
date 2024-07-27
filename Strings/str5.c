#include<stdio.h>

//string is working on address, not like array a[1],a[2]..
//condition is compulsory is use '%s'.
//if we use %d so concept is same as we had study.

void main()
{
        //here char n1 is string not a char array bcz Vivek is written is " ".
        //if Vivek is written is '' in individual char then it is char array.
        
    char n1[]="Vivek";      // n1 is address of fisrt char(V).
    printf("%s \n",n1);
    printf("%s \n",n1+1); // n+1 means address of char 'i'.
    printf("%s \n",n1+2);  
    printf("%s \n",n1+3);
    printf("%s \n",n1+4);
    printf("%s \n",n1+5); //output is blank bcz position have no char.
    
    printf("%s \n",&n1[0]);
    printf("%s \n",&n1[1]);
    printf("%s \n",&n1[2]);
    printf("%s \n",&n1[3]);
    printf("%s \n",&n1[4]);


    
}