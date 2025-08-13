/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 12:29:25 by amtan             #+#    #+#             */
/*   Updated: 2025/08/13 19:43:43 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
		return (NULL);
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	*range;
// 	int	i;
// 	int	min;
// 	int	max;

// 	min = 5;
// 	max = 10;
// 	range = ft_range(min, max);
// 	if (range)
// 	{
// 		i = 0;
// 		printf("Range from %d to %d (excluded): ", min, max);
// 		while (i < (max - min))
// 		{
// 			printf("%d ", range[i]);
// 			i++;
// 		}
// 		printf("\n");
// 		free(range);
// 	}
// 	else
// 		printf("Range is NULL\n");
// 	return (0);
// }
