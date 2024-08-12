#include "rush01.h"

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

int ft_strcheck(char *str)
{
	int i;

	i = 0;
	while(str && str[i])
	{
		if (i % 2 == 0 && (str[i] >= '1' && str[i] <= '4'))
			i++;
		else if (i % 2 == 1 && str[i] == ' ')
			i++;
		else
			return (0);
	}
	return (i);
}

bool	input_parsing(int argc, char **argv) {

	char error_message[] = "Error\n";

	if (argc != 2)
	{
		write(1, &error_message, ft_strlen(error_message));
		return false;
	}
	if (ft_strcheck(argv[1]) != 31)
	{
		write(1, &error_message, ft_strlen(error_message));
		return false;
	}
	return true;
}
