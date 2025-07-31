/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:25:44 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 15:28:42 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_sort_int_tab(int *tab, int size);

// int	main(void)
// {
// 	int	tab[] = {5, 3, 8, 1, 2};
// 	int	size;
// 	int	i;

// 	size = sizeof(tab) / sizeof(tab[0]);
// 	printf("Original array: ");
// 	for (i = 0; i < size; i++)
// 	{
// 		printf("%d ", tab[i]);
// 	}
// 	printf("\n");
// 	ft_sort_int_tab(tab, size);
// 	printf("Sorted array: ");
// 	for (i = 0; i < size; i++)
// 	{
// 		printf("%d ", tab[i]);
// 	}
// 	printf("\n");
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
