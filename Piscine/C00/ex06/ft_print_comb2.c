/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 17:18:45 by amtan             #+#    #+#             */
/*   Updated: 2025/07/28 11:31:00 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	first_number;
	int	second_number;

	first_number = 0;
	while (first_number <= 98)
	{
		second_number = first_number + 1;
		while (second_number <= 99)
		{
			ft_putchar(first_number / 10 + '0');
			ft_putchar(first_number % 10 + '0');
			ft_putchar(' ');
			ft_putchar(second_number / 10 + '0');
			ft_putchar(second_number % 10 + '0');
			if (first_number != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			second_number++;
		}
		first_number++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/
