#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strput(char c)
{
    putchar(c);
    return;
}

void my_putstr(char *param_1)
{
    strput(*param_1);
}

int main()
{
    char chu = 'abcdelele dzp ll 0';
    my_putstr(chu);
    return (0);
}