/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 20:49:04 by amtan             #+#    #+#             */
/*   Updated: 2025/08/06 22:41:58 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	base_len(char *base)
{
	int	len;
	int	j;

	len = 0;
	while (base[len] != '\0')
	{
		if (base[len] == '+' || base[len] == '-' || ft_isspace(base[len]))
			return (-1);
		j = len + 1;
		while (base[j] != '\0')
		{
			if (base[len] == base[j])
				return (-1);
			j++;
		}
		len++;
	}
	if (len < 2)
		return (-1);
	return (len);
}

char	*skip_spaces(char *str)
{
	while (ft_isspace(*str))
		str++;
	return (str);
}

int	base_index(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index] != '\0')
	{
		if (base[index] == c)
			return (index);
		index++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len;
	int	sign;
	int	result;
	int	index;

	len = base_len(base);
	if (len == -1)
		return (0);
	str = skip_spaces(str);
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	result = 0;
	index = base_index(*str, base);
	while (index != -1)
	{
		result = result * len + index;
		str++;
		index = base_index(*str, base);
	}
	return (result * sign);
}

// #include <stdio.h>

// int	main(void)
// {
// 	static char *base = "0123456789ABCDEF";
// 	static char *str = "   -42";
// 	printf("Input: \"%s\" -> Output: %d\n", str, ft_atoi_base(str, base));
// 	return (0);
// }
