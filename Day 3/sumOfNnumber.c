#include<stdio.h>
#include<conio.h>
int main(){
  int n,sum=0;
  printf("Enter an integer value (>0): ");
  scanf("%d",&n);
  int temp=n;
  while(n>0){
    sum += n;
    n--;
  }
  printf("Sum from 1 to %d is %d",temp,sum);
  return 0;
}