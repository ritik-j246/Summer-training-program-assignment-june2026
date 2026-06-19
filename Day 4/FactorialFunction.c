#include<stdio.h>
#include<conio.h>
int fact(int x){
    int factorial=1 ; 
     for(int i = 1 ;i <= x ; i++){
    factorial *= i ; 
  }
  return factorial;
}
int main(){
  int n;
  printf("Enter an integer value : ");
  scanf("%d",&n);
 
  printf("The factorial of %d is %d ",n,fact(n));
  return 0; 
}