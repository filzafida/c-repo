// Display contents of a string in reverse order using pointers.

#include <stdio.h>

int main()
{
    char name[10] = "filza";
    char *s = name;
    char *e = s;

    while (*e != '\0')
    {
        e++;
    }
    while (e >= s)
    {
        printf("%c", *e);
        e--;
    }

    return 0;
}