#include <stdio.h>
#include <conio.h>
int main()
{
    int x, y;
    char oper;
    printf("Enter an integer value of x : ");
    scanf("%d", &x);
    printf("Enter an integer value of y : ");
    scanf("%d", &y);
    printf("Select an operator(+ , - , * , /) ");
    scanf(" %c",&oper);

    switch (oper)
    {
    case ('+'):
        printf("%d", x + y);
        break;
    case ('-'):
        printf("%d", x - y);
        break;
    case ('*'):
        printf("%d", x * y);
        break;
    case ('/'):
    {
        if (y == 0)
            printf("Syntax error !!");
    
        printf("%d", x / y);
        break;
    }
    default:
        printf("Enter a valid operator");
    }

    return 0;
}