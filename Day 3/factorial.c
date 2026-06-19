#include<stdio.h>
#include<conio.h>
int main(){
  int n,factorial=1;
  printf("Enter an integer value : ");
  scanf("%d",&n);
  for(int i = 1 ;i <= n ; i++){
    factorial *= i ; 
  }
  printf("The factorial of %d is %d ",n,factorial);
  return 0; 
}