/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:55:14 by amtan             #+#    #+#             */
/*   Updated: 2025/08/06 16:03:30 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putnbr(int nb);

// int	main(void)
// {
// 	ft_putnbr(42);
// 	write(1, "\n", 1);
// 	ft_putnbr(-2147483648); // Test edge case for INT_MIN
// 	write(1, "\n", 1);
// 	ft_putnbr(2147483647); // Test edge case for INT_MAX
// 	write(1, "\n", 1);
// 	ft_putnbr(0); // Test edge case for zero
// 	write(1, "\n", 1);
// 	return (0);
// }

void	ft_putnbr(int nb)
{
	long	n;
	char	digit;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		digit = n + '0';
		write(1, &digit, 1);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
}
