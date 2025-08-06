/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:15:02 by amtan             #+#    #+#             */
/*   Updated: 2025/08/06 23:18:24 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_fibonacci(int index);

// int	main(void)
// {
// 	int	result;
// 	int	index;

// 	index = 42;
// 	result = ft_fibonacci(index);
// 	printf("Fibonacci of index %d: %d\n", index, result);
// 	return (0);
// }

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
