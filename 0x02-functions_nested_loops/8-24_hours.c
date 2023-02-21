#include "main.h"

/**
 * jack_baeur - returns every minute in a day
 *
 * Return:Always 0
 */

void jack_baeur(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; ++hours)
	{
		for (minutes = 0; minutes < 60; ++minutes)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(minutes % 10 + '0');
			_putchar('\n');
		}

	}
}
