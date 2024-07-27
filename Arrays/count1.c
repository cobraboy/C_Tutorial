#include <stdio.h>

//find odd nuber in array

void counterOdd(int arr[]);

int main() {
    int arr[]={1,2,3,4,5,6};
    counterOdd(arr);
    return 0;
}
void counterOdd(int arr[]) {
    for(int i=0;i<6;i++){ 
           if(arr[i] % 2 != 0){
            printf("%d \n",arr[i]);
           }
    }
}