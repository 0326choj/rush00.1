/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cryu <cryu@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 14:08:33 by cryu              #+#    #+#             */
/*   Updated: 2020/11/21 16:24:28 by cryu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x,int y)
{
	int col = 1;
	int row;
	while(col <= y)
	{
		row = 1;
		if(col==1||col==y)
		{
			while(row <= x)
			{
				if(row==1||row==x)
				{
					ft_putchar('o');
				}
				else
				{
					ft_putchar('-');
				}
				row++;
			}
			ft_putchar('\n');
		}
		else
		{
			while(row <= x)
			{
				if(row==1||row==x)
				{
					ft_putchar('|');
				}
				else
				{
					ft_putchar(' ');
				}
				row++;
			}
			ft_putchar('\n');
		}
		col++;
	}
}
