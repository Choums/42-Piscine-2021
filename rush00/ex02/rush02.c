/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wben-mim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 10:50:35 by wben-mim          #+#    #+#             */
/*   Updated: 2021/07/04 10:50:39 by wben-mim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(int i, int x, int j, int y)
{
	if (i == 0 && j == 0)
		ft_putchar('A');
	else if (i == x - 1 && j == 0)
		ft_putchar('A');
	else if (i == 0 && j == y - 1)
		ft_putchar('C');
	else if (i == x - 1 && j == y - 1)
		ft_putchar('C');
	else if (j == 0 || j == y - 1)
		ft_putchar('B');
	else if (i == 0 || i == x - 1)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	if (x < 1 || y < 1)
	{
		return ;
	}
	i = 0;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			ft_print_line(i, x, j, y);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
