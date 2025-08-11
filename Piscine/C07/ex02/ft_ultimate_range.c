/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:35:09 by amtan             #+#    #+#             */
/*   Updated: 2025/08/11 12:46:36 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = (int *)malloc(size * sizeof(int));
	if (!*range)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*range;
// 	int	min;
// 	int	max;
// 	int	size;
// 	int	i;

// 	min = 5;
// 	max = 10;
// 	size = ft_ultimate_range(&range, min, max);
// 	if (size >= 0)
// 	{
// 		printf("Range from %d to %d (excluded): ", min, max);
// 		i = 0;
// 		while (i < size)
// 		{
// 			printf("%d ", range[i]);
// 			i++;
// 		}
// 		printf("\n");
// 		free(range);
// 	}
// 	else
// 		printf("Memory allocation failed\n");
// 	return (0);
// }
