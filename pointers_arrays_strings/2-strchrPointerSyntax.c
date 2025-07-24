#include "main.h"

char *_strchr(char *s, char c)
{
    char *ptr = s;

    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            return (ptr);
        }

        ptr++;
    }

    if (c == '\0')
    {
        return (ptr);
    }

    return ('\0');
}