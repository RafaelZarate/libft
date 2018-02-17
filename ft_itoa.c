
#include "libft.h"

static	size_t	digits(int	n)
{
	size_t i;

	while (n /= 10)
		i++;
	return (i);
}

char	*ft_itoa(int	n)
{
	char	*result;
	int	length;
	int	holder;

	length = digits(n);
	ft_putstr("1");
	holder = n;
	if (n < 0)
	{
		length++;
		holder = -n;
	}
	ft_putstr("2");
	result = ft_strnew(length);
	ft_putstr("3");
	while (holder /= 10)
	{
		length--;
		result[length] = (holder % 10) + '0';
	}
	ft_putstr(result);
//	if (n < 0)
	//	result[0] = '-';
	return (result);
}
