#include <stdio.h>
#include <stdlib.h>

int caller()
{
    int variable = 0;
    return variable;
}

void my_initializer(int *param_1)
{
    *param_1 = caller();
    return;
}