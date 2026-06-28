// program to calculate x raise to powern n by recurssive method .....

#include <stdio.h>
int cal(int x, int y)
{
    if (y == 0)
        return 1;
    if (y == 1)
        return x;
    else
        return x * cal(x, y - 1);
}
int main()
{
    int a, b;
    printf("Enter  the value of a : ");
    scanf("%d", &a);
    printf("Enter  the value of b : ");
    scanf("%d", &b);
    printf("%d raise to power %d is %d", a, b, cal(a, b));
    return 0;
}