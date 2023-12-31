/*
 * File: 101-print_number.c
 * Author: Amazoun Mohamed
 */

#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: the number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
