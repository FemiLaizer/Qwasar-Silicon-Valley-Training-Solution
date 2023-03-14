#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_string_formatting(char *param_1, char *param_2, int param_3)
{
    printf("Hello, my name is %s %s, I'm %d.\n", param_1, param_2, param_3);
    // Hello, my name is john doe, I'm 37.
    return;
}

int main()
{
    char *f = "John";
    char *l = "Doe";
    int a = 37;
    my_string_formatting(f, l, a);
    return 0;
}