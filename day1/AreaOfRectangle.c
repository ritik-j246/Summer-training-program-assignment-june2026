// WAP to calculate the area of rectangle....
#include<stdio.h>
#include<conio.h>
int main(){
    float length , width , area =0; 
     printf("Enter the length of rectangle : ");
    scanf("%d",&length);
     printf("Enter the width of rectangle : ");
    scanf("%d",&width);
    area = length*width; //formula to calculate the area of rectangle..
     printf("Area of rectangle is %d ", area );
     return 0;
    
}