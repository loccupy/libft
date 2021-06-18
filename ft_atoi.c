#include "libft.h"
int	ft_atoi(const char *str)
{
	int	i;
	int	nb;
	int	neg;

	neg = 1;
	nb = 0;
	i = 0;
	while (*str == ' ' || *str == '\n' || *str == '\t' || *str == '\v'
		|| *str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
		neg = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(str[i]))
	{
		nb = (10 * nb) + (str[i] - '0');
		i++;
	}
	return (nb * neg);
}
