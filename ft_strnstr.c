#include "libft.h"
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	j;
	size_t	i;

	if (!ft_strlen(needle))
		return ((char *)haystack);
	if (ft_strlen(haystack) < ft_strlen(needle) || len < ft_strlen(needle))
		return (NULL);
	i = 0;
	while (haystack[i] && i <= len - ft_strlen(needle))
	{
		j = 0;
		while (needle[j] && needle[j] == haystack[i + j])
			j++;
		if (j == ft_strlen(needle))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
