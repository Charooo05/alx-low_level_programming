#include "main.h"
#include "2-strlen_recursion.c"
/**
 * check - checks a string if it is a palindrome
 *
 * @s: string
 * @i: iterator 1
 * @j: iterator 2
 *
 * Return: 1 if it is a palindrome and 0 if otherwise
 *
 */

int check(char *s, int i, int j)
{
	if (s[i] == '\0')
		return (1);
	if (s[i] != s[j])
		return (0);
	return (check(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if the string is a palindrome
 *
 * @s: string
 *
 * Return: 1 if it is a palindrome and 0 if otherwise
 */

int is_palindrome(char *s)
{
	return (check(s, 0, _strlen_recursion(s) - 1));
}
