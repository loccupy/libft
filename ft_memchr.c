#include "libft.h"
void	*ft_memchr(const void *dst, int c, size_t n)
{
	unsigned char	*dst1;

	dst1 = (unsigned char *)dst;
	while (n --)
	{
		if (*dst1 == (unsigned char) c)
			return (dst1);
		dst1++;
	}
	return (NULL);
}
