/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:19:26 by amtan             #+#    #+#             */
/*   Updated: 2025/08/07 21:23:28 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*stock;
	int					i;

	stock = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!stock)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		stock[i].str = av[i];
		stock[i].size = ft_strlen(av[i]);
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	return (stock);
}



