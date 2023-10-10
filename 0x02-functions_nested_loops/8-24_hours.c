#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer.
 */
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0'); /* Print the tens digit of the hour */
			_putchar((hour % 10) + '0'); /* Print the ones digit of the hour */
			_putchar(':');
			_putchar((minute / 10) + '0'); /* Print the tens digit of the minute */
			_putchar((minute % 10) + '0'); /* Print the ones digit of the minute */
			_putchar('\n');
		}
	}
}
