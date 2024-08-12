#include "rush01.h"

bool check_if_column_is_unique(char *arr, char matrix[4][4], int string_lvl, char *usr_input)
{
	int i;
	int j;

	j = 0;
	while (j < string_lvl)
	{
		i = 0;
		while(i < 4)
		{
			if (arr[i] == matrix[j][i])
				return (false);
			i++;
		}
		j++;
	}
	assign_array(arr, matrix, string_lvl);
	if (num_gen(matrix, string_lvl + 1, usr_input) == true)
		return (true);
	return (false);
}

bool switch_last_three(char *arr, char matrix[4][4], int string_lvl, char *usr_input)
{
	if (check_if_column_is_unique(arr, matrix, string_lvl, usr_input) == true)
		return (true);
	swap_last_2(arr);
	if (check_if_column_is_unique(arr, matrix, string_lvl, usr_input) == true)
		return (true);
	rotate(arr);
	if (check_if_column_is_unique(arr, matrix, string_lvl, usr_input) == true)
		return (true);
	swap_last_2(arr);
	if (check_if_column_is_unique(arr, matrix, string_lvl, usr_input) == true)
		return (true);
	rev_rotate(arr);
	if (check_if_column_is_unique(arr, matrix, string_lvl, usr_input) == true)
		return (true);
	swap_last_2(arr);
	if (check_if_column_is_unique(arr, matrix, string_lvl, usr_input) == true)
		return (true);
	return false;
}


bool check_req(char matrix[4][4], char *usr_input)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (counter(matrix[0][i], matrix[1][i], matrix[2][i], matrix[3][i]) != usr_input[i * 2]
			|| counter(matrix[3][i], matrix[2][i], matrix[1][i], matrix[0][i]) != usr_input[(i * 2) + 8]
			|| counter(matrix[i][0], matrix[i][1], matrix[i][2], matrix[i][3]) != usr_input[(i * 2) + 16]
			|| counter(matrix[i][3], matrix[i][2], matrix[i][1], matrix[i][0]) != usr_input[(i * 2) + 24])
			return false;
		i++;
	}
	print_matrix(matrix);
	return (true);
}

bool num_gen(char matrix[4][4], int string_lvl, char *usr_input)
{
	int i;

	if (string_lvl == 4)
	{
		if (check_req(matrix, usr_input) == true)
			return true;
		return false;
	}
	char arr[4] = {'1', '2', '3', '4'};
	i = 1;
	while (i <= 4)
	{
		change_first_nbr(arr, i);
		if (switch_last_three(arr, matrix, string_lvl, usr_input) == true)
			return (true);
		i++;
	}
	return false;
}


int main(int argc, char **argv)
{
	char matrix[4][4];
	int string_lvl;

	string_lvl = 0;
	if (input_parsing(argc, argv) != true)
		return (1);
	if (num_gen(matrix, string_lvl, argv[1]) != true)
		write(1, "Error\n", 6);
	return (0);
}

// #include <stdlib.h>
// int main(int argc, char *argv[])
// {
// 	int		i;
// 	char 	**matrix;

// 	matrix = (char **)malloc(sizeof(char *) * 4);
// 	if (matrix == NULL)
// 	{
// 		write(1, "Error\n", 1);
// 		return (1);
// 	}
// 	i = 0;
// 	while (i < 4)
// 	{
// 		matrix[i] = (char *)malloc(sizeof(char) * 4);
// 		if (matrix[i] == NULL)
// 		{
// 			while(--i != 0)
// 				free(matrix[i]);
// 			free(matrix);
// 			return (1);
// 		}
// 	}
// 	 /*
// 		implementation
// 		implementation
// 		implementation
// 	 */
// 	i = 0;
// 	while (i < 4)
// 	{
// 		free(matrix[i]);
// 		i++;
// 	}
// 	free(matrix);
// 	return (0);
// }
