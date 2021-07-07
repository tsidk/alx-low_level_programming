#include "holberton.h"

/**
* _strlen - return length of string
* @str: string to check
*
* Return: length of str
*/
int _strlen(char *str)
{
if (*str == '\0')
return (0);
else
return (1 + _strlen(str + 1));
}

int check_palindrome(int l, int r, char *p)
{
if (l >= r)
return (1);
else if (p[l] != p[r])
return (0);
else
return (check_palindrome(l + 1, r - 1, p));
}

int is_palindrome(char *s)
{
int i;

i = _strlen(s) - 1;
return (check_palindrome(0, i, s));
}
