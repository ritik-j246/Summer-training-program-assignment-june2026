#include <stdio.h>
#include <stdbool.h>
bool is_prime(int n)
{
    if (n == 1 || n == 0)
        return  false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
int main()
{
    int x;
    printf("Enter an integer vaue : ");
    scanf("%d", &x);
    if (is_prime(x) == true)
        printf("%d is a prime number", x);
    else
        printf("%d is not a prime number", x);
    return 0;
}