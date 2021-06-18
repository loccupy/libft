#include "libft.h"
static int	ft_free_tab_str(char **tab, size_t max_size)
{
	size_t	z;

	z = 0;
	if (tab[max_size] == NULL)
	{
		while (z < max_size)
		{
			free(tab[z]);
			z++;
		}
		free(tab);
		tab = NULL;
		return (1);
	}
	else
		return (0);
}

static int	get_word_number(char const *s, char c)
{
	int	i;
	int	count;

	if (s[0] == 0)
		return (0);
	count = 0;
	if (s[0] != c)
		count++;
	i = 1;
	while (s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			count++;
		i++;
	}
	return (count);
}

static int	get_word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	if (s == NULL)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * (get_word_number(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < get_word_number(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		tab[i] = ft_substr(s, j, get_word_len(s + j, c));
		if (ft_free_tab_str(tab, i) == 1)
			break ;
		while (s[j] && s[j] != c)
			j++;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
