// program to check the entered string is palindrome or not .......
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
    char word[20];

    bool is_palindrome = true;

    printf("Enter a string : ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';
    char name[20];
    strcpy(name, word);
    int st = 0, end = strlen(name) - 1;

    while (st < end)
    {
        char temp = name[st];
        name[st] = name[end];
        name[end] = temp;
        st++;
        end--;
    }
    for (int i = 0; i < strlen(name); i++)
    {
        if (name[i] != word[i])
            is_palindrome = false;
    }
    if (is_palindrome == true)
        printf("The entered string is palindrome");
    else
        printf("The entered string is not palindrome");

    return 0;
}