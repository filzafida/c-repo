// Check whether a string is palindrome or not.
// A palindrome is a word, sentence, verse, or even number that reads the same backward or forward.
#include <stdio.h>

int main()
{

    int i, j = 0;
    char str[100];

    printf("Enter a string\n");
    scanf("%s", &str);

    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    i--;

    while (str[j] == str[i])
    {
        if (j < i)
        {
            j++;
            i--;
        }
        else
        {
            printf("The string is palindrome.\n");
            return 0;
        }
    }

    printf("The string is not palindrome");
    return 0;
}