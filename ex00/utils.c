#include "rush01.h"

char counter(char a, char b, char c, char d)
{
	char counter = '1';
	if (b > a)
		counter++;
	if (c > b && c > a)
		counter++;
	if (d > c && d > b && d > a)
		counter++;
	return (counter);
}

void assign_array(char *arr, char matrix[4][4], int string_lvl)
{
	int i;

	i = 0;
	while (i < 4)
	{
		matrix[string_lvl][i] = arr[i];
		i++;
	}
}

void print_matrix(char matrix[4][4])
{
	int i;
	int	j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 3)
		{
			write(1, &matrix[j][i], 1);
			write(1, " ", 1);
			i++;
		}
		write(1, &matrix[j][i], 1);
		write(1, "\n", 1);
		j++;
	}
}
