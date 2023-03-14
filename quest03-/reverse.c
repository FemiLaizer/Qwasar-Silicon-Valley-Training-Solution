#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* char *reverse_string(char *param_1)
{
    int i;
    int n = strlen(param_1);
    char *reverse, temp;

    for (i = n - 1; i >= 0; i--)
    {
        temp = param_1[i];
        reverse = &temp;
    }
    return reverse;
} */

char *reverse_string(char *param_1)
{
    int i, n, str;
    n = strlen(param_1);

    for (int i = 0; i < n / 2; i++)
    {
        str = param_1[i];
        param_1[i] = param_1[n - i - 1];
        param_1[n - i - 1] = str;
    }
    return param_1;
}

// ONLY EDIT CODE ABOVE THIS LINE ----
int main()
{
    char my_str[] = "Hello";

    printf("Before reverse -> %s\n", my_str);
    printf("Reverse -> %s\n", reverse_string(my_str));
    return 0;
}