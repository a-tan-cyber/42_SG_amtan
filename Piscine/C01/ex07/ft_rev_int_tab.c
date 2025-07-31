/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:20:36 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 15:21:07 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_rev_int_tab(int *tab, int size);

// int	main(void)
// {
// 	int	tab[] = {1, 2, 3, 4, 5};
// 	int	size = sizeof(tab) / sizeof(tab[0]);
// 	int	i;

// 	printf("Original array: ");
// 	for (i = 0; i < size; i++)
// 	{
// 		printf("%d ", tab[i]);
// 	}
// 	printf("\n");

// 	ft_rev_int_tab(tab, size);

// 	printf("Reversed array: ");
// 	for (i = 0; i < size; i++)
// 	{
// 		printf("%d ", tab[i]);
// 	}
// 	printf("\n");

// 	return (0);
// }

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
