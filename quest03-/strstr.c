#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *my_strstr(char *param_1, char *param_2)
{
    int i = 0, j = 0,
        n = strlen(param_1),
        m = strlen(param_2);

    while (param_1[i] != '\0')
    {
        while (param_2[j] != '\0')
        {
            if (param_1[i] == param_2[j])
            {
                break;
            }
            j++;
        }
        param_1 = &param_1[i];
        i++;
    }
    printf("%s\n", param_1); // I want to return this value if param_2 is part of param_1
    return NULL;
}

int main()
{
    char *s1 = "hello";
    char *s2 = "ll";
    my_strstr(s1, s2);
    return 0;
}

// char *my_strstr(char *param_1, char *param_2)
// {
//     int i = 0, j = 0, n = strlen(param_1), m = strlen(param_2);
//     char *found;

//     printf("%d %d\n", n, m);
//     char *result;

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {

//             if (param_1[i] == param_2[j])
//             {
//                 param_1 = &param_1[i];
//                 result = param_1;
//                 printf("%s\n", result);
//             }
//         }
//     }
//     return param_2;
// }

// char *my_strstr(char *param_1, char *param_2)
// {
//     int i = 0, j = 0,
//         n = strlen(param_1),
//         m = strlen(param_2);

//     char *result;

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {

//             if (param_2[j] == param_1[i])
//             {
//                 param_1 = &param_1[i];
//                 result = param_1;
//                 printf("%s\n", result);
//                 return result;
//             }
//         }
//     }
//     return NULL;
// }