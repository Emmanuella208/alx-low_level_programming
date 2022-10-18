#include <stdio.h>
#include <unistd.h>

/**
 * main - points exactly and that peice of art is useful
 *
 * Return: Always 1 (success)
 */

int main(void)
{
	write(2, "and that peice of art is useful\" - Dora korper, 2015-10-19\n", 59);
	return (1);
}
