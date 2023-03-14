#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// size_t my_strlen(const char *s);
/*
int my_strlen(char *param_1)
{
    int result = 0;
    // param_1[i] != '\0' ... or ,,,,use strlen(param_1)
    for (int i = 0; i < strlen(param_1); i++)
    {
        result += 1;
    }
    return result;
} */

int my_strlen(char *param_1)
{
    int result = strlen(param_1);
    return result;
}

int main()
{
    int n = my_strlen("RaInB0w d4Sh!");
    printf("%i\n", n);
    return 0;
}