/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otanir <otanir@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:32:16 by otanir            #+#    #+#             */
/*   Updated: 2025/03/02 06:54:57 by otanir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printline(int i, int j, int x, int y)
{
	if (i == 0 && j == 0)
		ft_putchar('o');
	else if (i == x - 1 && j == 0)
		ft_putchar('o');
	else if (i == 0 && j == y - 1)
		ft_putchar('o');
	else if (i == x - 1 && j == y - 1)
		ft_putchar('o');
	else if (j == 0 || j == y - 1)
		ft_putchar('-');
	else if (i == 0 || i == x - 1)
		ft_putchar('|');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x <= 0 || y <= 0)
		return ;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			ft_printline(i, j, x, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
