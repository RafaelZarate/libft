
#include "libft.h"

int ft_atoi(const char *str)
{
	size_t i;
	int result;
	int negTest;

	i = 0;
	result = 0;
	negTest = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negTest = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	result *= negTest;
	return (result);
}
