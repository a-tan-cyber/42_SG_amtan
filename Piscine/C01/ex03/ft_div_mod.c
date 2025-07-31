/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amtan <amtan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 17:01:47 by amtan             #+#    #+#             */
/*   Updated: 2025/07/31 15:08:34 by amtan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// void	ft_div_mod(int a, int b, int *div, int *mod);

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div;
// 	int	mod;

// 	a = 10;
// 	b = 3;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("a: %d, b: %d\n", a, b);
// 	printf("div: %d, mod: %d\n", div, mod);
// 	return (0);
// }

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
