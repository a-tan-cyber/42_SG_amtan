/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:25:44 by amtan             #+#    #+#             */
/*   Updated: 2025/07/30 22:01:36 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

// void	ft_sort_int_tab(int *tab, int size);

// int	main(void)
// {
// 	static int	tab[5] = {5, 3, 8, 1, 2};
// 	int			size;
// 	int			i;
// 	char		c;

// 	size = 5;
// 	i = 0;
// 	ft_sort_int_tab(tab, size);
// 	while (i < size)
// 	{
// 		if (i > 0)
// 			write(1, ", ", 2);
// 		c = tab[i] + '0';
// 		write(1, &c, 1);
// 		i++;
// 	}
// 	write(1, "\n", 1);
// 	return (0);
// }

void	ft_sort_int_tab(int *tab, int size)
{
	int	current_index;
	int	compare_index;
	int	value_to_insert;

	current_index = 1;
	while (current_index < size)
	{
		value_to_insert = tab[current_index];
		compare_index = current_index - 1;
		while (compare_index >= 0 && tab[compare_index] > value_to_insert)
		{
			tab[compare_index + 1] = tab[compare_index];
			compare_index--;
		}
		tab[compare_index + 1] = value_to_insert;
		current_index++;
	}
}
