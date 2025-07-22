#include "main.h"

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;
    int found_digit = 0;
    int digit_value;

    while (s[i] != '\0' && (!(s[i] >= '0' && s[i] <= '9')) && s[i] != '+' && s[i] != '-')
    {
        i++;
    }
    
    while (s[i] != '\0' && (s[i] == '+' || s[i] == '-'))
    {
        if (s[i] == '-')
        {
            sign = sign * -1;
        }
        i++;
    } 

    while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
    {
        found_digit = 1;

        digit_value = s[i] - '0';

        result = result * 10 + digit_value;

        i++;
    }

    if (found_digit == 0)
    {
        return 0;
    }
    else
        return result * sign;
}