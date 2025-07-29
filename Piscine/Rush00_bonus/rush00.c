/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteo <hteo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 23:38:45 by amtan             #+#    #+#             */
/*   Updated: 2025/07/29 22:33:36 by hteo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char	*g_top_row;
static char	*g_mid_row;
static char	*g_btm_row;

void	ft_putchar(char c);

void	rush00(void)
{
	g_top_row[] = {'o', '-'. 'o'};
	g_mid_row[] = {'|', ' '. '|'};
	g_btm_row[] = {'o', '-'. 'o'};
}

void	rush01(void)
{
	g_top_row[] = {'/', '*'. '\\'};
	g_mid_row[] = {'*', ' '. '*'};
	g_btm_row[] = {'\\', '*'. '/'};
}

void	print_row(int last_col, char first_char, char mid_char, char last_char)
{
	int	current_col;

	current_col = 1;
	while (current_col <= last_col)
	{
		if (current_col == 1)
			ft_putchar(first_char);
		else if (current_col == last_col)
			ft_putchar(last_char);
		else
			ft_putchar(mid_char);
		current_col++;
	}
	ft_putchar('\n');
}

int	is_zero_or_negative(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		write(2, "Error: Both x and y must be ", 28);
		write(2, "non-zero positive integers.\n", 28);
		return (1);
	}
	else
		return (0);
}

void	rush(int x, int y)
{
	int	current_row;
	int	last_col;
	int	last_row;

	if (is_zero_or_negative(x, y) == 1)
		return ;
	current_row = 1;
	last_col = x;
	last_row = y;
	while (current_row <= last_row)
	{
		if (current_row == 1)
			print_row(last_col, g_top_row[0], g_top_row[1], g_top_row[2]);
		else if (current_row == last_row)
			print_row(last_col, g_btm_row[0], g_btm_row[1], g_btm_row[2]);
		else
			print_row(last_col, g_mid_row[0], g_mid_row[1], g_mid_row[2]);
		current_row++;
	}
}
