#include <stdio.h>

int main() {
    int adhaar[7];

    //input
    int *ptr=&adhaar[0];

    for(int i=0; i<7; i++) {
        printf("Digit : ");
        scanf("%d",&adhaar[i]);
    }
    //output
    for(int i=0; i<7; i++){
        printf("Digit : %d \n",adhaar[i]); //or *(&adhaar[i])
    }
    return 0;
}