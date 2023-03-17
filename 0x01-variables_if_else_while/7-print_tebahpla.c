#include <stdio.h>
#include <unistd.h>
#include <time.h>
/**
 * main - Entry point
 * Return : Sucess 0
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
		putchar(low);
	putchar('\n');
	return (0);
}
