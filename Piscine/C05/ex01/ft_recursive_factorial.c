/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:08:44 by amtan             #+#    #+#             */
/*   Updated: 2025/08/06 23:10:20 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_recursive_factorial(int nb);

// int	main(void)
// {
// 	int	result;
// 	int	nb;

// 	nb = 4;
// 	result = ft_recursive_factorial(nb);
// 	printf("Factorial of %d: %d\n", nb, result);
// }

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
