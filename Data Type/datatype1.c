#include<stdio.h>

/*unsigned short int is 0 to 65535
signed short int range is -32768 to 32767 */

void main() {
    signed short int i = 32768; // o/p is -32768.
    printf("%d \n",i);

    signed short int b = -32769; // o/p is 32768.
    printf("%d \n",b);

    unsigned short int j = 32768; // o/p is 32768.
    printf("%d \n",j);

    unsigned short int k = 65536; // o/p is 0.
    printf("%d",k);

    unsigned short int a = -3; // o/p is 65533.
    printf("%d",a);
}