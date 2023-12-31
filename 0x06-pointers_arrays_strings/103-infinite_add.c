#include "main.h"

/**
 * infinite_add - Adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, sum, i, j;
	
	for (len1 = 0; n1[len1] != '\0'; len1++)
	{
		for (len2 = 0; n2[len2] != '\0'; len2++)
		{
			if (len1 > size_r || len2 > size_r)
			{
				return (0);
			}
			carry = 0;
			i = len1 - 1;
			j = len2 - 1;
			size_r--;
			r[size_r] = '\0';
			while (i >= 0 || j >= 0)
			{
				sum = carry;
				if (i >= 0)
				{
					sum += n1[i] - '0';
				}
				if (j >= 0)
					sum += n2[j] - '0';
				carry = sum / 10;
				r[size_r] = (sum % 10) + '0';
				i--;
				j--;
				size_r--;
			}
			if (carry)
			{
				if (size_r == 0)
					return (0);
				r[size_r] = carry + '0';
			}
			return (&r[size_r]);
}
