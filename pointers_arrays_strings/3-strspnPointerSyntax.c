#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    int count = 0;
    char *s_ptr = s;
    char *accept_ptr = accept;
    int found;

    while (*s_ptr != '\0')
    {
        found = 0;
        accept_ptr = accept;

        while (*accept_ptr != '\0')
        {
            if (*s_ptr == *accept_ptr)
            {
                found = 1;
                break;
            }
            accept_ptr++;
        }
        if (found == 0)
        {
            break;
        }
        count++;
        s_ptr++;
    }
    return (count);
}