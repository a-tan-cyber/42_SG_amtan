/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:20:36 by amtan             #+#    #+#             */
/*   Updated: 2025/07/30 21:31:20 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	index_from_start;
	int	index_from_end;

	index_from_start = 0;
	index_from_end = size - 1;
	while (index_from_start < index_from_end)
	{
		temp = tab[index_from_start];
		tab[index_from_start] = tab[index_from_end];
		tab[index_from_end] = temp;
		index_from_start++;
		index_from_end--;
	}
}
