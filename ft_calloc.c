#include "libft.h"
void	*ft_calloc(size_t count, size_t size)
{
	char	*dst;

	dst = malloc(count * size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, count * size);
	return (dst);
}
