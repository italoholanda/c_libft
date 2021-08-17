#include <unistd.h>

int	ft_isdigit(char *input)
{
	if (input < '0' || input > '9')
		return (0);
	return (1);
}
