#include<stdio.h>

int main() {
    //2D Array declaration.
    int arr[2][3];

    //Counter variable for loop. INPUT
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
        printf("Enter a value for Arr[%d][%d] :");
        scanf("%d",&arr[i][j]);
        }
    }

    //Displaying array elements. OUTPUT
    printf("Two Dimensional Array Elemnets : \n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
        printf("%d ",arr[i][j]);

        if(j==2){
            printf("\n");
        }
        }
    }
    return 0;

}