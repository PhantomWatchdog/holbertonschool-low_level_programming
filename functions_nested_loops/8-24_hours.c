#include "main.h"

/**
* jack_bauer - print every minute of the day from 00.00 to 23.59,
* with two int (hours and minutes),
* hours and minutes - with a start from 0 to hero,
* their first putchar display the first digit by a division;
* first: 12:40 -> 1 and 4,
* the second display the last digit with a modulo,
* second: 12:40 -> 2 and 0,
* Return: jack bauer normal  day.
*/

void jack_bauer(void)
{
	int hours;
	int minutes;

	for (hours = 0; hours <= 23; hours++)
	{
		for (minutes = 0; minutes <= 59; minutes++)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((minutes / 10) + '0');
			_putchar((minutes % 10) + '0');
			_putchar('\n');
		}
	}
}
