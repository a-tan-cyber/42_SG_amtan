/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 19:12:00 by amtan             #+#    #+#             */
/*   Updated: 2025/07/27 23:21:29 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	long_nb;

	long_nb = (long)nb;
	if (long_nb < 0)
	{
		ft_putchar('-');
		long_nb *= -1;
	}
	if (long_nb >= 0 && long_nb <= 9)
		ft_putchar(long_nb + '0');
	if (long_nb > 9)
	{
		ft_putnbr(long_nb / 10);
		ft_putnbr(long_nb % 10);
	}
}
