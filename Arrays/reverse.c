#include <stdio.h>

int main() {
    //initialize of array
    int arr[]={1, 2, 3, 4, 5};

    //calculate length of array
    int length=sizeof(arr)/sizeof(arr[0]); //sizeof(arr[0])

    printf("print original array : \n");
    for(int i=0; i<length; i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("print reverse array :  \n");
    //loop through the array in reverse
    for(int i=length-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}