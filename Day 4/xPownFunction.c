#include<stdio.h>
#include<conio.h>
int power(int x , int y){
    if(y<0){
        y = -y;
        x = 1/x;
    }
    if(y == 0 ) return 1;
    if(x == 0 ) return 0;

    int ans=1 ; 
     for(int i = 1 ;i <= y ; i++){
    ans = x*ans ; 
  }
  return ans;
}
int main(){
 int a , b ; 
    printf("Enter the integer value of a : ");
    scanf("%d",&a);
     printf("Enter the integer value of b : ");
    scanf("%d",&b);
  printf("%d raise to power %d is %d ",a,b,power(a,b));
  return 0; 
}