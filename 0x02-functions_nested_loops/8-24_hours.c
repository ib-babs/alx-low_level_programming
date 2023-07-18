#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Return: 24hours of time (Success)
 */
void jack_bauer(void)
{
	int start = 0;

	while (start <= 2)
	{
		int end = 0;

		while (end <= 3)
		{
			int sec_1 = 0;

			while (sec_1 <= 5)
			{
				int sec_2 = 0;

				while (sec_2 <= 9)
				{
					_putchar(start + '0');
					_putchar(end + '0');
					_putchar(':');
					_putchar(sec_1 + '0');
					_putchar(sec_2 + '0');
					_putchar('\n');
					sec_2++;
				}
				sec_1++;
			}
			end++;
		}
		start++;
	}
}
