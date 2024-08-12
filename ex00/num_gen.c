void rev_rotate(char *arr)
{
	char	temp;

	temp = arr[1];
	arr[1] = arr[2];
	arr[2] = arr[3];
	arr[3] = temp;
	// print_arr(arr);
}

void rotate(char *arr)
{
	char	temp;

	temp = arr[1];
	arr[1] = arr[3];
	arr[3] = arr[2];
	arr[2] = temp;
	// print_arr(arr);
}

void swap_last_2(char *arr)
{
	char	temp;

	temp = arr[3];
	arr[3] = arr[2];
	arr[2] = temp;
	// print_arr(arr);
}

void change_first_nbr(char *arr, int nbr)
{
	if (nbr == 2)
	{
		arr[0] = '2';
		arr[1] = '1';
		arr[2] = '3';
		arr[3] = '4';
	}
	if (nbr == 3)
	{
		arr[0] = '3';
		arr[1] = '1';
		arr[2] = '2';
		arr[3] = '4';
	}
	if (nbr == 4)
	{
		arr[0] = '4';
		arr[1] = '1';
		arr[2] = '2';
		arr[3] = '3';
	}
}
