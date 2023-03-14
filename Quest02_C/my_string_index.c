#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_string_index(char *param_1, char param_2)
{
    for (int i = 0; i < strlen(param_1); i++)
    {
        if (param_2 == param_1[i])
        {
            return i;
        }
    }
    return -1;
}

// Use int main
/*
Input: "hello" && "l"
Output:
Return Value: 2 */