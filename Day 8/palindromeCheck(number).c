// program to check the given number is palindrome or not...........
#include <stdio.h>
int reverse(int x, int newdigit)
{
    if (x == 0)
        return newdigit;
    int last = x % 10;
    newdigit = newdigit * 10 + last;
    return reverse(x / 10, newdigit);
}
int main()
{
    int x;
    printf("Enter an integer value : ");
    scanf("%d", &x);
    if (x < 0)
    {
        printf("invalid input !!!");
    }
    else
    {
        int new_digit = reverse(x, 0);
        if (new_digit == x)
            printf("The entered digit is Palindrome");
        else
            printf("The entered digit is not Palindrome");
    }

    return 0;
}