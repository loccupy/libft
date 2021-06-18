#include "libft.h"
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	z;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	a = malloc(sizeof(char) * (len + 1));
	if (!a)
		return (0);
	i = 0;
	z = 0;
	while (s[i])
	{
		if (i >= start && z < len)
		{
			a[z] = s[i];
			z++;
		}
		i++;
	}
	a[z] = 0;
	return (a);
}
