// program to calculate factorial of a given number by recursion....

#include <stdio.h>
int factorial(int x)
{
    int ans = 1;
    if (x == 1 || x == 0)
        return 1;
    else
        ans = ans * x * factorial(x - 1);
    return ans;
}
int main()
{
    int n;
    printf("Enter an integer value : ");
    scanf("%d", &n);
    if (n < 0)
        printf("The factorial of %d is not defined. ", n);
    else
        printf("The factorial of %d is %d ", n, factorial(n));
    return 0;
}