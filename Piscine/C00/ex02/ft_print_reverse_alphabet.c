/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 19:51:43 by amtan             #+#    #+#             */
/*   Updated: 2025/07/24 22:10:15 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	starting_letter;
	char	ending_letter;
	char	current_letter;

	starting_letter = 'z';
	ending_letter = 'a';
	current_letter = starting_letter;
	while (current_letter >= ending_letter)
	{
		write(1, &current_letter, 1);
		current_letter--;
	}
}
