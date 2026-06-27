#include<stdio.h>
#include<conio.h>
int main(){
    float celsius , fer;
    printf("Enter the  temperature in celsius : ");
    scanf("%f",&celsius);
    fer = (celsius * 1.8 ) + 32;
    printf(" The temperature in fahrenheit is %.3f",fer);
    return 0;
}