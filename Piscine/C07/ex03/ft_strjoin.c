/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:47:17 by amtan             #+#    #+#             */
/*   Updated: 2025/08/13 13:41:56 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_total_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	sep_len;

	i = 0;
	len = 0;
	sep_len = ft_strlen(sep);
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	if (size > 0)
		len += sep_len * (size - 1);
	return (len);
}

int	ft_cpy(char *dst, char *src, int pos)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[pos] = src[i];
		pos++;
		i++;
	}
	return (pos);
}

void	ft_fill(char *dst, int size, char **strs, char *sep)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		pos = ft_cpy(dst, strs[i], pos);
		if (i < size - 1)
			pos = ft_cpy(dst, sep, pos);
		i++;
	}
	dst[pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total;

	if (size <= 0)
	{
		result = (char *)malloc(sizeof(char));
		if (!result)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	total = ft_total_len(size, strs, sep);
	result = (char *)malloc(sizeof(char) * (total + 1));
	if (!result)
		return (NULL);
	ft_fill(result, size, strs, sep);
	return (result);
}

// #include <stdio.h>

// int	main(void)
// {
// 	static char	*test[] = {"test1", "test2", "test3"};
// 	char		*s;

// 	s = ft_strjoin(0 , test, " LOL ");
// 	printf("'%s'\n", s);
// 	free(s);
// }
