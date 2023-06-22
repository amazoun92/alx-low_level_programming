/*
 * File: 6-print_line.c
 * Author: Amazoun Mohamed
 */

#include "main.h"

/**
 * print_line -  a function that draws a straight line in the terminal.
 * @n : the number of time _ should be printed
 *
 * Return : void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
