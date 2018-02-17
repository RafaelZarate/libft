
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t i;
	unsigned char *s2;

	i = 0;
	s2 = s;
	while (i < n)
	{
		s2[i] = c;
		i++;
	}
	return (s);
}
