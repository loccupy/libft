#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst1;

	dst1 = (char *)dst;
	if (!dst && !src)
		return (dst);
	while (n--)
		*dst1++ = *(char *)src++;
	return (dst);
}
