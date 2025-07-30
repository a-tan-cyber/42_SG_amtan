/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hteo <hteo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 23:38:45 by amtan             #+#    #+#             */
/*   Updated: 2025/07/29 23:14:48 by hteo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char	g_top_row[3];
static char	g_mid_row[3];
static char	g_btm_row[3];

void	ft_putchar(char c);

void	rush00_01(int rush_num)
{
	if (rush_num == 0)
	{
		g_top_row[0] = 'o';
		g_top_row[1] = '-';
		g_top_row[2] = 'o';
		g_mid_row[0] = '|';
		g_mid_row[1] = ' ';
		g_mid_row[2] = '|';
		g_btm_row[0] = 'o';
		g_btm_row[1] = '-';
		g_btm_row[2] = 'o';
	}
	else
	{
		g_top_row[0] = '/';
		g_top_row[1] = '*';
		g_top_row[2] = '\\';
		g_mid_row[0] = '*';
		g_mid_row[1] = ' ';
		g_mid_row[2] = '*';
		g_btm_row[0] = '\\';
		g_btm_row[1] = '*';
		g_btm_row[2] = '/';
	}
}

void	rush02_03(int rush_num)
{
	if (rush_num == 2)
	{
		g_top_row[0] = 'A';
		g_top_row[1] = 'B';
		g_top_row[2] = 'A';
		g_mid_row[0] = 'B';
		g_mid_row[1] = ' ';
		g_mid_row[2] = 'B';
		g_btm_row[0] = 'C';
		g_btm_row[1] = 'B';
		g_btm_row[2] = 'C';
	}
	else
	{
		g_top_row[0] = 'A';
		g_top_row[1] = 'B';
		g_top_row[2] = 'C';
		g_mid_row[0] = 'B';
		g_mid_row[1] = ' ';
		g_mid_row[2] = 'B';
		g_btm_row[0] = 'A';
		g_btm_row[1] = 'B';
		g_btm_row[2] = 'C';
	}
}

void	rush04(void)
{
	g_top_row[0] = 'A';
	g_top_row[1] = 'B';
	g_top_row[2] = 'C';
	g_mid_row[0] = 'B';
	g_mid_row[1] = ' ';
	g_mid_row[2] = 'B';
	g_btm_row[0] = 'C';
	g_btm_row[1] = 'B';
	g_btm_row[2] = 'A';
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

void	rush(int x, int y)
{
	int	current_row;
	int	last_col;
	int	last_row;

	if (x <= 0 || y <= 0)
	{
		write(2, "Error: Both x and y must be ", 28);
		write(2, "non-zero positive integers.\n", 28);
		return ;
	}
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
