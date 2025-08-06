/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 23:19:48 by amtan             #+#    #+#             */
/*   Updated: 2025/08/06 23:25:34 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_sqrt(int nb);

// int	main(void)
// {
// 	int	result;
// 	int	nb;

// 	nb = 4;
// 	result = ft_sqrt(nb);
// 	printf("Square root of %d: %d\n", nb, result);
// 	return (0);
// }

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}
