#include<stdio.h>
#include<conio.h>
int main(){
  int n, count = 0 ; 
  printf("Enter an integer value : ");
  scanf("%d",&n);
  if(n==0) count = 1; 
  while(n != 0){
    count ++;
    n /=10;
  }
  printf("The entered number %d contain  %d digits. ",n,count);
  return 0;
}