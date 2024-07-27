#include <stdio.h>
//Create a string first name and last name to store details of user & print all the characters using a loop.
void printName(char arr[]);

int main() {
    char firstName[]={"Vivek"};
    char lastName[]={"Dadhaniya"};

    printName(firstName);
    printf("\t");
    printName(lastName);

    return 0;
}

void printName(char arr[]){
    for(int i=0; arr[i] != '\0'; i++ ) {
        printf("%c",arr[i]);
    }
}