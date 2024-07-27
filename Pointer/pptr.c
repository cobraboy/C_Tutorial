#include <stdio.h>

int main() {
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr; // most important part

    printf("%d \n",**pptr);
    printf("%d \n",*ptr);
    printf("%d \n",i);
    printf("%d \n",*(&i));
    printf("%d \n\n",**(&ptr));

    printf("%d \n",*(&ptr));
    printf("%d \n",*pptr);
    printf("%d \n\n",&i);

    printf("%u \n",ptr);
    printf("%u \n",pptr);
    printf("%u \n",&i);
    printf("%u \n",&ptr);
    printf("%u \n",&pptr);

    return 0;
} 