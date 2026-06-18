#include<stdio.h>
#include<conio.h>
int main(){
  int n;
  printf("Enter an integer value : ");
  scanf("%d",&n);
  while(n>0){
    printf("%d ",n);
    n--;
  }
  return 0;
}