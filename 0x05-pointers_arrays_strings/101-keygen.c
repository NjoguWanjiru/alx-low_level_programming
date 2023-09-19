#include "main.h"

char *generate_password(void)
{
    char *charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int password_length = PASSWORD_LENGTH;
    char *password = malloc((password_length + 1) * sizeof(char));
    int i;

    if (password == NULL)
    {
        return NULL;
    }

    srand(time(NULL));

    for (i = 0; i < password_length; i++)
    {
        int index = rand() % strlen(charset);
        password[i] = charset[index];
    }

    password[password_length] = '\0';

    return password;
}
