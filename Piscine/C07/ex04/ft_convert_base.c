/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 16:46:25 by amtan             #+#    #+#             */
/*   Updated: 2025/08/13 14:19:07 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				ft_atoi_base(char *str, char *base);
int				base_len(char *base);

unsigned long	get_un_abs(long n);
int				write_digits_to_buf(unsigned long un, char *base, int bl,
					char *buf);
char			*alloc_rev_copy(char *buf, int len, int is_neg);
char			*itoa_base_long(long n, char *base_to);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	long	long_base_from;

	result = NULL;
	if (base_len(base_from) == -1 || base_len(base_to) == -1)
		return (result);
	long_base_from = (long)ft_atoi_base(nbr, base_from);
	result = itoa_base_long(long_base_from, base_to);
	return (result);
}

unsigned long	get_un_abs(long n)
{
	unsigned long	u;

	if (n < 0)
	{
		u = (unsigned long)(-(n + 1));
		u += 1;
	}
	else
		u = (unsigned long)n;
	return (u);
}

int	write_digits_to_buf(unsigned long un, char *base, int bl, char *buf)
{
	int	i;

	i = 0;
	if (un == 0)
	{
		buf[i] = base[0];
		i++;
	}
	while (un > 0)
	{
		buf[i] = base[un % (unsigned long)bl];
		i++;
		un /= (unsigned long)bl;
	}
	return (i);
}

char	*alloc_rev_copy(char *buf, int len, int is_neg)
{
	char	*res;
	int		j;
	int		k;

	res = (char *)malloc((len + is_neg + 1) * sizeof(char));
	if (!res)
		return (NULL);
	j = 0;
	if (is_neg)
	{
		res[j] = '-';
		j++;
	}
	k = len - 1;
	while (k >= 0)
	{
		res[j] = buf[k];
		j++;
		k--;
	}
	res[j] = '\0';
	return (res);
}

char	*itoa_base_long(long n, char *base_to)
{
	int				bl;
	unsigned long	un;
	int				len;
	char			buf[66];
	int				is_neg;

	if (bl == -1)
		return (0);
	is_neg = 0;
	if (n < 0)
		is_neg = 1;
	un = get_un_abs(n);
	len = write_digits_to_buf(un, base_to, bl, buf);
	return (alloc_rev_copy(buf, len, is_neg));
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*nbr;
// 	char	*from;
// 	char	*to;
// 	char	*result;

// 	nbr = "42";
// 	from = "0123456789";
// 	to = "01";
// 	result = ft_convert_base(nbr, from, to);
// 	printf("nbr = \"%s\" | from = \"%s\" -> to = \"%s\" => ", nbr, from, to);
// 	if (result)
// 	{
// 		printf("\"%s\"\n", result);
// 		free(result);
// 	}
// 	else
// 		printf("Error\n");
// }
