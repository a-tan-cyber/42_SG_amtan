/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:47:17 by amtan             #+#    #+#             */
/*   Updated: 2025/08/11 13:37:56 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);

char	*malloc_ft_strjoin(int size, char **strs, char *sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	char	*result;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	result = (char *)malloc_ft_strjoin(size, strs, sep);
	if (!result)
		return (NULL);

	while (i < size)
	{
		k = 0;
		if (!strs[i])
			return (NULL);
		while (strs[i][k])
			result[j++] = strs[i][k++];
		if (i < size - 1)
		{
			k = 0;
			while (sep[k])
				result[j++] = sep[k++];
		}
		i++;
	}
	result[j] = '\0';
	return (result);
}

int	ft_strlen(char *str)
{
	int	count;

	if (!str)
		return (0);
	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*malloc_ft_strjoin(int size, char **strs, char *sep)
{
	int		total_length;
	int		i;
	char	*result;

	total_length = 0;
	i = 0;
	if (size > 0)
	{
		while (i < size)
		{
			total_length += ft_strlen(strs[i]);
			i++;
		}
		total_length += ft_strlen(sep) * (size - 1);
	}
	total_length++;
	result = (char *)malloc(sizeof(char) * total_length);
	if (!result)
		return (NULL);
	return (result);
}
