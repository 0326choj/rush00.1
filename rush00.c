/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 14:08:33 by cryu              #+#    #+#             */
/*   Updated: 2020/11/21 15:14:10 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x,int y)
{
	int row;
	int col;

	row = 1;
	while(row <= y)
	{
		col = 1;
		if(row==1||row==y)
		{
			while(col <= x)
			{
				if(col==1||col==x)
				{
					ft_putchar('O');
				}
				else
				{
					ft_putchar('-');
				}
				col++;
			}
			ft_putchar('\n');
		}
		else
		{
			while(col <= x)
			{
				if(col==1||col==x)
				{
					ft_putchar('|');
				}
				else
				{
					ft_putchar(' ');
				}
				col++;
			}
			ft_putchar('\n');
		}
		row++;
	}
}
