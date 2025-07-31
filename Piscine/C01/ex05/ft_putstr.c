/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:17:04 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 15:12:38 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

// void	ft_putstr(char *str);

// int	main(void)
// {
// 	static char	str[] = "Hello, World!";

// 	ft_putstr(str);
// 	return (0);
// }

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
