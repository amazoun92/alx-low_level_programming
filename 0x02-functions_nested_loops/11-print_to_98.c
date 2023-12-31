/*
 * File: 11-print_to_98.c
 * Author: Amazoun Mohamed
 */

#include "main.h"
#include <stdio.h>

/**
 * print_to_98  - prints all natural numbers from n to 98
 *                followed by a new line.
 * @n: integer number to search for natural numbers in range
 *     n to 98
 *
 * Return: natural numbers from n to 98
 */

void print_to_98(int n)
{
	int i;

	if (n <= 98)
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
				else
					printf("\n");
		}
	else
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
				printf(", ");
			else
				printf("\n");
		}
}
