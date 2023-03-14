<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *filepointer;
    char *str = malloc(sizeof(str));
    int i = 0;

    if (argc < 1)
        return 0;

    while (i < argc)
    {
        if (!(argc <= 1))
            filepointer = fopen(argv[i], "r");

        while (!feof(filepointer))
        {
            int length = strlen(str);
            str[length - 1] = '\0';
            fprintf(stdout, "%s\n", str);
        }
        i++;
        fclose(filepointer);
    }
    return 0;
=======
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *filepointer;
    char *str = malloc(sizeof(str));
    int i = 0;

    if (argc < 1)
        return 0;

    while (i < argc)
    {
        if (!(argc <= 1))
            filepointer = fopen(argv[i], "r");

        while (!feof(filepointer))
        {
            int length = strlen(str);
            str[length - 1] = '\0';
            fprintf(stdout, "%s\n", str);
        }
        i++;
        fclose(filepointer);
    }
    return 0;
>>>>>>> f4d79ce14d8778c54e8f8ed76ad9f546feb47aa8
}