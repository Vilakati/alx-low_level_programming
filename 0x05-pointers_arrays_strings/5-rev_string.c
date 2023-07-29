#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: reversed string
 */
void rev_string(char *s)
{
	char nonto;
	int n, kati, sibisi;

	kati = 0;
	sibisi = 0;

	while (s[kati] != '\0')
	{
		kati++;
	}

	sibisi = kati - 1;

	for (n = 0; n < kati / 2; n++)
	{
		nonto = s[n];
		s[i] = s[sibisi];
		s[sibisi--] = nonto;
	}
}

