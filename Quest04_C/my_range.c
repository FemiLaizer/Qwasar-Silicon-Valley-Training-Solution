#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *my_range(int param_1, int param_2)
{

    int result[param_2], pos, i, size;
    // printf("%d\n", result[i]);
    for (i = param_1; i < size; i++)
    {
        result[i + 1] = result[i];
        printf("%d\n", i);
    }

    for (i = param_1; i < size; i++)
    {
        printf("%d\n", result[i]);
    }

    return 0;
}

int main()
{
    int n = 1;
    int m = 4;
    my_range(n, m);
    return 0;
}