#include "libft.h"
static int	simvol(char sym, const char *set)
{
	while (*set)
		if (sym == *set++)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	up;
	size_t	down;
	char	*rtn;

	if (!s1)
		return (NULL);
	up = 0;
	down = ft_strlen(s1);
	while (simvol(s1[up], set) != 0)
		up++;
	if (up == ft_strlen(s1))
	{
		rtn = ft_strdup("");
		if (!rtn)
			return (NULL);
		return (rtn);
	}
	while (simvol(s1[down - 1], set) != 0)
		down--;
	rtn = ft_substr(s1, up, down - up);
	return (rtn);
}
