/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/27 23:29:51 by amtan             #+#    #+#             */
/*   Updated: 2025/07/28 14:41:32 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_comb(char *comb_buffer, int n)
{
	int	index;

	index = 0;
	while (index < n)
	{
		write(1, &comb_buffer[index], 1);
		index++;
	}
	if (comb_buffer[0] != (10 - n) + '0')
		write(1, ", ", 2);
}

void	recurse_gen_combs(int n, int index, int starting_digit,
		char *comb_buffer)
{
	int	digit;

	if (index == n)
	{
		write_comb(comb_buffer, n);
		return ;
	}
	digit = starting_digit;
	while (digit <= 10 - n + index)
	{
		comb_buffer[index] = digit + '0';
		recurse_gen_combs(n, index + 1, digit + 1, comb_buffer);
		digit++;
	}
}

void	ft_print_combn(int n)
{
	char	comb_buffer[9];

	if (n <= 0 || n >= 10)
	{
		write(2, "Error: n must be a non-zero digit.\n", 35);
		return ;
	}
	recurse_gen_combs(n, 0, 0, comb_buffer);
}

/*
int	main(void)
{
	ft_print_combn(2);
}
*/
