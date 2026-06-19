#include <stdio.h>
#include <conio.h>
int cal(int x , int y ){
    int limit = x<y?x:y;
    int gcd = 0;
     for (int i = 1; i <= limit; i++)
    {
       if(x%i == 0 && y%i == 0) gcd = i;
    }
    return gcd;
}
int main()
{
    int x , y;
    printf("Enter first integer value : ");
    scanf("%d", &x);
     printf("Enter second integer value : ");
    scanf("%d", &y);
        printf("The greatest common divisor of %d and %d is %d",x,y, cal( x , y ));
    return 0;
}