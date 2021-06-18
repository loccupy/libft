#include "libft.h"
void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*dst1;
	char	*src1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	if (src1 < dst1)
	{
		dst1 = dst1 + n;
		src1 = src1 + n;
		while (n--)
			*--dst1 = *--src1;
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
