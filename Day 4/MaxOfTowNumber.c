#include <stdio.h>
#include <conio.h>
int maximum(int x, int y)
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a, b;
    printf("Enter the integer value of a : ");
    scanf("%d", &a);
    printf("Enter the integer value of b : ");
    scanf("%d", &b);
    if (a == b)
        printf("Both a and b are same. ");
    else
        printf("%d is the greatest number between %d and %d", maximum(a, b), a, b);
    return 0;
}