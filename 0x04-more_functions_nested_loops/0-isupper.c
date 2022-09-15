#include <stdio.h>
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isupper(char c)
{
	bool status = isupper(c);
	if(status)
	{
		return (1);
	}
	else
	{	
		return (0);
	}
}
