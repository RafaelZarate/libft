
#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t i2;

	i = ft_strlen(dest);
	i2 = 0;
	while (src[i2] && i2 < n)
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}
