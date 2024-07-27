#include <stdio.h>

int main() {
    int adhaar[5];

    //input
    int *ptr=&adhaar[0];

    for(int i=0; i<5; i++){
        printf("index : ");
        scanf("%d",(ptr+i)); //Most Important (ptr+i)
    }
    //out put
    for(int i=0; i<5; i++) {
        printf("index : %d \n",*(ptr+i)); //Most Important (*ptr+i)
    }
    return 0;
}