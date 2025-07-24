/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:51:43 by amtan             #+#    #+#             */
/*   Updated: 2025/07/24 19:59:24 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	starting_letter;
	int	ending_letter;
	int	current_letter;

	starting_letter = 'z';
	ending_letter = 'a';
	current_letter = starting_letter;
	while (current_letter >= ending_letter)
	{
		write(1, &current_letter, 1);
		current_letter--;
	}
}
