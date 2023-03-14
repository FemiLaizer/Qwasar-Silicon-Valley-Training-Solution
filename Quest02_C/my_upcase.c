#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char *my_upcase(char *param_1)
// {
//     printf("%c\n", toupper(*param_1));
//     return;
// }

char *my_upcase(char *param_1)
{
    int j = 0;
    char str;
    static char result[] = "";

    while (param_1[j])
    {
        str = (param_1[j]);
        putchar(toupper(str));
        strncat(result, &str, 1);
        j++;
    }
    return result;
}

int main()
{
    char *s = "james";
    my_upcase(s);
    return 0;
}