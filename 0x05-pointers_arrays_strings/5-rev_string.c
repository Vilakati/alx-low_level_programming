#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: reversed string
 */
void rev_string(char *s)
{
	char nonto;
	int i, kati, sibisi;

	kati = 0;
	sibisi = 0;

	while (s[kati] != '\0')
	{
		kati++;
	}

	sibisi = kati - 1;

	for (i = 0; i < kati / 2; i++)	
	{
		nonto = s[i];
		s[i] = s[sibisi];
		s[sibisi--] = nonto;
	}
}
