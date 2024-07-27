//write a program to store the first n fibonacci numbers.
#include <stdio.h> 

int main() {
  int n ;
  printf("enter a number n :" );
  scanf("%d",&n);

  for(int i=2; i<n; i++) {
    int a[n];
    a[0]=0;
    a[1]=1;
    a[i]=a[i-1]+a[i-2];
    printf("%d \t",a[i]);

  }
  return 0;
}
