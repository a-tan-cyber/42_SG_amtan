/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:12:14 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 15:10:14 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_ultimate_div_mod(int *a, int *b);

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 10;
// 	b = 3;
// 	printf("Before: a = %d, b = %d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("After: a = %d, b = %d\n", a, b);
// 	return (0);
// }

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
