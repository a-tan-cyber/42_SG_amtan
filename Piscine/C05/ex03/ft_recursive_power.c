/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:13:29 by amtan             #+#    #+#             */
/*   Updated: 2025/08/06 23:14:36 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_recursive_power(int nb, int power);

// int	main(void)
// {
// 	int	result;
// 	int	nb;
// 	int	power;

// 	nb = 3;
// 	power = 2;
// 	result = ft_recursive_power(nb, power);
// 	printf("%d to the power of %d is %d\n", nb, power, result);
// 	return (0);
// }

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
