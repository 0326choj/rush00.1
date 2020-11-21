/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 19:17:15 by cryu              #+#    #+#             */
/*   Updated: 2020/11/21 19:42:34 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	first_plan(int x)
{
	int row;

	row = 1;
	while (row <= x)
	{
		if (row == 1 || row == x)
		{
			ft_putchar('o');
		}
		else
		{
			ft_putchar('-');
		}
		row += 1;
	}
}

void	second_plan(int x)
{
	int row;

	row = 1;
	while (row <= x)
	{
		if (row == 1 || row == x)
		{
			ft_putchar('|');
		}
		else
		{
			ft_putchar(' ');
		}
		row += 1;
	}
}

void	rush(int x, int y)
{
	int col;

	col = 1;
	while (col <= y)
	{
		if (col == 1 || col == y)
		{
			first_plan(x);
		}
		else
		{
			second_plan(x);
		}
		ft_putchar('\n');
		col += 1;
	}
}
