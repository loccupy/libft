#include "libft.h"
static int	get_size(int n)
{
	int		count;
	long	res;

	res = n;
	count = 1;
	if (res < 0)
	{
		count++;
		res *= (-1);
	}
	while (res >= 10)
	{
		count++;
		res /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*massif;
	long	res;
	int		i;

	i = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	massif = malloc(get_size(n) + 1);
	if (massif == 0)
		return (NULL);
	if (n < 0)
		massif[0] = 45;
	res = n;
	if (res < 0)
		res *= (-1);
	massif[get_size(n)] = 0;
	while (res >= 10)
	{
		massif[get_size(n) - i] = (res % 10) + 48;
		res /= 10;
		i++;
	}
	massif[get_size(n) - i++] = (res % 10) + 48;
	return (massif);
}
