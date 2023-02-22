#include"main.h"

/**
 * jack_baur- prints every minute of the day
*/

void jack_baur(void)
{
	int min, hour;

	for (hour = 0; hour <= 23; ++hour)
	{
		for (min = 0; min <= 59; ++min)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((min / 10) + 48);
			_putchar((min % 10) + 48);
			_putchar('\n');}}
}
