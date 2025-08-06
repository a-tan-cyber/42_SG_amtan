/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:26:07 by amtan             #+#    #+#             */
/*   Updated: 2025/08/06 23:38:37 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_is_prime(int nb);

// int	main(void)
// {
// 	int	result;
// 	int	nb;

// 	nb = 4;
// 	result = ft_is_prime(nb);
// 	if (result)
// 		printf("%d is a prime number.\n", nb);
// 	else
// 		printf("%d is not a prime number.\n", nb);
// 	return (0);
// }

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
