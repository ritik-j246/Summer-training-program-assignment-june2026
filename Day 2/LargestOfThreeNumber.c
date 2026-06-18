#include<stdio.h>
#include<conio.h>
int main(){
    int x,y,z;
    printf("Enter the integer value of x : ");
    scanf("%d",&x);
    printf("Enter the integer value of y : ");
    scanf("%d",&y);
    printf("Enter the integer value of z : ");
    scanf("%d",&z);
    // now we check which number is greates ; 
    if(x==y==z){
        printf("all numbers are equal ");
    }
    if(x>y&&x>z){
        printf("%d is greatest",x);
    }else if(y>x&&y>z){
        printf("%d is greatest",x);
    }else{
        printf("%d is greatest",z);
    }
    return 0 ; 
}