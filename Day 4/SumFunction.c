// the program  calculate the sum of two numbers ;#include<stdio.h>
#include<stdio.h>
#include<conio.h>
void Add(int x , int y){
    int sum = 0;
     sum = x + y ; 
    printf(" Sum of the a & b is : %d ",sum);
}
int main(){
    int a , b; 
    printf("Enter the integer value of a : ");
    scanf("%d",&a);
     printf("Enter the integer value of b : ");
    scanf("%d",&b);
        Add(a , b);
   return 0 ; 

}