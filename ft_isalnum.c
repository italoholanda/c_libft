#include <unistd.h>

int	ft_isalnum(char *str)
{
	int	iterator;

	iterator = 0;
	while (str[iterator])
	{
		if (str[iterator] < 'A' || str[iterator] > 'Z')
			if (str[iterator] < 'a' || str[iterator] > 'z')
				if (str[iterator] < '0' || str[iterator] > '9')
					return (0);
		++iterator;
	}
	return (1);
}
