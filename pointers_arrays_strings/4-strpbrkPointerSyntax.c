#include "main.h"

char *_strpbrk(char *s, char *accept)
{
    char *s_ptr = s;

    char *accept_ptr = accept;

    while (*s_ptr != '\0')
    {
        accept_ptr = accept;

        while (*accept_ptr != '\0')
        {
            if (*s_ptr == *accept_ptr)
            {
                return(s_ptr);
            }
            accept_ptr++;
        }
        s_ptr++;
    }
    return ('\0');
}