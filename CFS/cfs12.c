#include<stdio.h>

void main() {
        int month; 
        printf("Enter a month order : ");
        scanf("%d",&month);
        switch (month)
        {
                case 1 :
                case 3 :
                case 5 :
                case 7 :
                case 8 :
                case 10 :
                case 12 : printf("31 Days"); 
                        break;
                case 2 : printf("28 Days");
                        break;
                default : printf("30 Days");
        }
}