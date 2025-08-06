/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:10:41 by amtan             #+#    #+#             */
/*   Updated: 2025/08/06 23:13:02 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_iterative_power(int nb, int power);

// int	main(void)
// {
// 	int	result;
// 	int	nb;
// 	int	power;

// 	nb = 42;
// 	power = 2;
// 	result = ft_iterative_power(nb, power);
// 	printf("%d to the power of %d is %d\n", nb, power, result);
// 	return (0);
// }

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
