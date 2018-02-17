
#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
	size_t i;
	size_t i2;

	i = ft_strlen(dest);
	i2 = 0;
	while (src[i2])
	{
		dest[i] = src[i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}
