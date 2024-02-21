#include "main.h"

/**
 * times_table - prints the digit number from 0 to 9,
 * separated by ',' and ' ',
 * and displaying each multiplication table,
 * with a new line as break,
 * Return: zero
*/

void times_table(void)
{
	int facteurs;
	int produit;
	int resultat;

	for (facteurs = 0; facteurs <= 9; facteurs++)
	{
		_putchar('0');

		for (produit = 1; produit <= 9; produit++)
		{
			_putchar(',');
			_putchar(' ');

			resultat = facteurs * produit;

			if (resultat <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((resultat / 10) + '0');
			}

			_putchar((resultat % 10) + '0');
		}

		_putchar('\n');
	}
}
