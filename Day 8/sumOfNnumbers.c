// To calculate the sum of n numbers using recursion..

#include <stdio.h>
int sum(int x)
{
    if (x == 0)
        return 0;
    if (x == 1)
        return 1;
    else
        return x + sum(x - 1);
}
int main()
{
    int n;
    printf("Enter an integer value of n : ");
    scanf("%d", &n);
    if (n < 0)
        printf("%d is invalid input !!", n);
    else
        printf("The sum of n numbers are %d", sum(n));
    return 0;
}