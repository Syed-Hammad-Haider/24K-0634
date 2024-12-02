#include <stdio.h>
int main()
{
    FILE *fptr1, *fptr2;
    char ch;
    fptr1 = fopen("sample.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Error in opening the file sample.txt.\n");
        return 1;
    }

    fptr2 = fopen("copy.txt", "w");
    if (fptr2 == NULL)
    {
        printf("Error in opening the file copy.txt.\n");
        fclose(fptr1);
        return 1;
    }

    while ((ch = fgetc(fptr1)) != EOF)
    {
        fputc(ch, fptr2); 
    }

    printf("File contents copied successfully.\n");
    fclose(fptr1);
    fclose(fptr2);

    return 0;
}
