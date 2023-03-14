<<<<<<< HEAD
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *file;
    // const int size = 4096;

    int currentFile = (argc > 1 ? 1 : 0);

    while (currentFile < argc)
    {
        if (argc > 1)
        {

            file = fopen(argv[currentFile], "r");
        }

        fseek(file, 0L, SEEK_END); // seek to the EOF
        int fsize = ftell(file);   // get the current position
        // rewind(file);
        char *str = malloc(sizeof(str));
        while (fread(str, fsize, 1, file))
        {
            int length = strlen(str);
            str[length - 1] = '\0';
            fprintf(stdout, "%s\n", str);
        }
        currentFile++;
        fclose(file);
    }

    return 0;
=======
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *file;
    // const int size = 4096;

    int currentFile = (argc > 1 ? 1 : 0);

    while (currentFile < argc)
    {
        if (argc > 1)
        {

            file = fopen(argv[currentFile], "r");
        }

        fseek(file, 0L, SEEK_END); // seek to the EOF
        int fsize = ftell(file);   // get the current position
        // rewind(file);
        char *str = malloc(sizeof(str));
        while (fread(str, fsize, 1, file))
        {
            int length = strlen(str);
            str[length - 1] = '\0';
            fprintf(stdout, "%s\n", str);
        }
        currentFile++;
        fclose(file);
    }

    return 0;
>>>>>>> f4d79ce14d8778c54e8f8ed76ad9f546feb47aa8
}