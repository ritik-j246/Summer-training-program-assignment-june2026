#include <stdio.h>
#include <conio.h>
#include <stdbool.h>
int main()
{
    int n;
    bool isprime = true;
    printf("Enter an integer value : ");
    scanf("%d", &n);
    if(n==1||n==0) isprime = false;
    for (int i = 2; i*i <= n; i++)
    {
        if (n % i == 0)
        {
            isprime = false;
            break;
        }
    }
    if (isprime == true)

        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
    return 0;
}