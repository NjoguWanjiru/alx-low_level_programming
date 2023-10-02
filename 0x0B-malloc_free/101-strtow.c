#include <stdlib.h>
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return (NULL);
    int i, j, word_count = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            word_count++;
   }
    char **words = malloc((word_count + 1) * sizeof(char *));
    if (words == NULL)
        return (NULL);
    int start = -1;
    int index = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
            start = i;

        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
        {
            int word_length = i - start + 1;
            words[index] = malloc(word_length * sizeof(char));
            if (words[index] == NULL)
            {
                for (j = 0; j < index; j++)
                    free(words[j]);
                free(words);
                return (NULL);
            }
            for (j = 0; j < word_length - 1; j++)
                words[index][j] = str[start + j];
            words[index][word_length - 1] = '\0';
            index++;
        }
    }
    words[index] = NULL;
    return (words);
}
