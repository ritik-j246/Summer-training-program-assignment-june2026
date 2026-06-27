#include<stdio.h>
#include<conio.h>
int main(){
    float prin_amount ,time , rate,Si;
    printf("Enter the principle amount : ");
    scanf("%f",&prin_amount);
    printf("Enter the days taken , to repay the amount : ");
    scanf("%f",&time);
    printf("Enter the rate of intrest (without percent sign ): ");
    scanf("%f",&rate);
    Si = (prin_amount*time*rate)/100;
    printf("The Simple intrest for %.3f prin_amount is %.3f ",prin_amount,Si);
    return 0;
}