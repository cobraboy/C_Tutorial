#include<stdio.h>
/*unsigned char range is 0 to 255.
signed char range is -128 to 127.*/
void main() {
    char x = 65;  // by default assum signed.
    printf("%d \n",x);

    char z = 129;  
    printf("%d \n",z);

    unsigned char y = 65;
    printf("%c \n",y);

    char c = 259;  
    printf("%c \n",c);

    char d = 98;  
    printf("%c \n",d);

    signed char a = 258;
    printf("%d \n",a); 

    unsigned char b = 258;  
    printf("%d \n",b);
}