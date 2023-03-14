#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_add(int param_1, int param_2)
{
    int sum = param_1 + param_2;
    return sum;
}

int main()
{
    my_add(10, 10);
    return 0;
}