#include<stdio.h>
#include<conio.h>
int main(){
  int n,lastdigit =0 , newnum = 0 ; 
  printf("Enter an integer value : ");
  scanf("%d",&n);
  int temp = n;
  while(n != 0){
    lastdigit = n%10;
    newnum = newnum*10 + lastdigit;
    n /=10;
  }
  printf("The reverse of entered number %d is %d ",temp,newnum);
  return 0;
}