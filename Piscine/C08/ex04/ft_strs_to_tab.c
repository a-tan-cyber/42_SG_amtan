/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:19:26 by amtan             #+#    #+#             */
/*   Updated: 2025/08/13 21:26:07 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;
	int		i;

	len = ft_strlen(src);
	dup = (char *)malloc((len + 1) * sizeof(char));
	if (!dup)
		return (0);
	i = 0;
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

void	free_tab(t_stock_str *arr, int filled)
{
	int	k;

	k = 0;
	while (k < filled)
	{
		free(arr[k].copy);
		k++;
	}
	free(arr);
}

int	fill_cell(t_stock_str *cell, char *src)
{
	cell->size = ft_strlen(src);
	cell->str = src;
	cell->copy = ft_strdup(src);
	if (!cell->copy)
		return (0);
	return (1);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int			i;

	arr = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return (0);
	i = 0;
	while (i < ac)
	{
		if (!fill_cell(&arr[i], av[i]))
		{
			free_tab(arr, i);
			return (0);
		}
		i++;
	}
	arr[i].str = 0;
	arr[i].copy = 0;
	arr[i].size = 0;
	return (arr);
}
