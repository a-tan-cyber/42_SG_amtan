/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:53:23 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 15:01:46 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_swap(int *a, int *b);

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 5;
// 	y = 10;
// 	printf("Before swap: x = %d, y = %d\n", x, y);
// 	ft_swap(&x, &y);
// 	printf("After swap: x = %d, y = %d\n", x, y);
// 	return (0);
// }

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
