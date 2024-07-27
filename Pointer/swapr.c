#include <stdio.h>

void swap(int *a,int *b);

int main() {
    int x=7,y=1;
    swap(&x,&y); //call function
    printf("x = %d & y = %d \n",x,y);
    return 0;
}
//call by reference
void swap(int *a,int *b) {
    int t=*a;
    *a=*b;
    *b=t;
    printf("a = %d & b = %d \n",*a,*b);
}