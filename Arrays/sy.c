#include <stdio.h>

int main() {
    int marks[3];

    printf("physis : ");
    scanf("%d",&marks[0]);

    printf("chemistry : ");
    scanf("%d",&marks[1]);

    printf("math : ");
    scanf("%d",&marks[2]);

    printf("physics = %d \t",marks[0]); //physics
    printf("chemistry = %d \t",marks[1]); //chemistry
    printf("math = %d \t",marks[2]); //math

    return 0;
}
