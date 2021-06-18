#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	while (*s != (const char)c && *s)
		s++;
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
