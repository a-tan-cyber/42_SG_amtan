#include <stdlib.h>

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		len;
	long	n;

	n = (long)nbr;
	len = ft_count_digits(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		len--;
		str[len] = (char)((n % 10) + '0');
		n /= 10;
	}
	return (str);
}