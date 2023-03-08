#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
int is_palindrome(char *s);

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: The string to be measured
 *
 * Return: The length of the string
 */
int is_palindrome(char *s)
{
	int len = 0;

	if (*(s + len))
	{
