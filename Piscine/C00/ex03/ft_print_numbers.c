/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:01:21 by amtan             #+#    #+#             */
/*   Updated: 2025/07/24 20:07:05 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	starting_number;
	int	ending_number;
	int	current_number;

	starting_number = '0';
	ending_number = '9';
	current_number = starting_number;
	while (current_number <= ending_number)
	{
		write(1, &current_number, 4);
		current_number++;
	}
}
