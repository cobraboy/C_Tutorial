#include <stdio.h>

int main(){
    //float occupies 4 byte space

    float price = 100.00;
    float *ptr = &price;

    printf("ptr = %u \n",ptr);
    ptr++;
    printf("ptr = %u \n",ptr);
    ptr--;
    printf("ptr = %u \n",ptr);

    //char oocupies 1 byte space

    char star='*';
    char *a=&star;
    printf("a = %u \n",a);
    a++;
    printf("a = %u \n",a);
    a--;
    printf("a = %u \n",a);
    
    return 0;
}