#include <unistd.h>

int	ft_isalpha(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator])
	{
		if (str[iterator] < 'A' || str[iterator] > 'Z')
			if (str[iterator] < 'a' || str[iterator] > 'z')
				return (0);
		++iterator;
	}
	return (1);
}
