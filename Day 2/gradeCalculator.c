#include<stdio.h>
#include<conio.h>
int main(){
    int marks ,percent ,num;
    printf("Enter the total marks obtained : ");
    scanf("%d",&marks);
    printf("Enter the number of subjects : ");
    scanf("%d",&num);    
    percent = marks/num;
    if(marks>100*num)printf("Enter a valid number of subjects and marks obtained ");
    if(percent>90){
        printf(" A grade ");
    }else if (90>=percent>80){
        printf(" B grade ");
    }else if (80>=percent>70){
        printf(" C grade ");
    }else if (70>=percent>60){
        printf(" D grade ");
    }else{
        printf(" FAIL ");
    }
    return 0 ; 
}