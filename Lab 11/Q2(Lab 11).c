#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_UNIQUE_WORDS 100
#define MAX_WORD_LENGTH 50
void convert_to_lowercase(char *current_word);
void remove_special_characters(char *current_word);
int main()
{
    char unique_words[MAX_UNIQUE_WORDS][MAX_WORD_LENGTH];
    char current_word[MAX_WORD_LENGTH];
    int word_counts[MAX_UNIQUE_WORDS];
    int total_unique_words = 0;
    int word_found_flag;

    for (int i = 0; i < MAX_UNIQUE_WORDS; i++)
    {
        word_counts[i] = 0;
    }

    FILE *file_pointer = fopen("worddocument.txt", "r");
    if (file_pointer == NULL)
    {
        printf("Error in opening the file for reading.\n");
        return 1;
    }

    while (fscanf(file_pointer, "%s", current_word) != EOF)
    {
        word_found_flag = 0;
        convert_to_lowercase(current_word);
        remove_special_characters(current_word);

        for (int i = 0; i < total_unique_words; i++)
        {
            if (strcmp(unique_words[i], current_word) == 0)
            {
                word_found_flag = 1;
                word_counts[i]++;
                break;
            }
        }

        if (word_found_flag == 0 && total_unique_words < MAX_UNIQUE_WORDS)
        {
            strcpy(unique_words[total_unique_words], current_word);
            word_counts[total_unique_words]++;
            total_unique_words++;
        }
    }

    fclose(file_pointer);

    printf("Frequencies of each word:\n");
    for (int i = 0; i < total_unique_words; i++)
    {
        printf("%s has been repeated %d time(s).\n", unique_words[i], word_counts[i]);
    }

    return 0;
}

void convert_to_lowercase(char *current_word)
{
    for (int i = 0; current_word[i] != '\0'; i++)
    {
        current_word[i] = tolower(current_word[i]);
    }
}

void remove_special_characters(char *current_word)
{
    char temp[MAX_WORD_LENGTH];
    int j = 0;
    for (int i = 0; current_word[i] != '\0'; i++)
    {
        if ((current_word[i] >= 'a' && current_word[i] <= 'z') || (current_word[i] >= '0' && current_word[i] <= '9'))
        {
            temp[j] = current_word[i];
            j++;
        }
    }
    temp[j] = '\0';
    strcpy(current_word, temp);
}
