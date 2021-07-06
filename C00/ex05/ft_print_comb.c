/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:20:02 by chaidel           #+#    #+#             */
/*   Updated: 2021/06/29 19:41:51 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_fin(char	i, char	j, char	n)
{
	char	esp;
	char	vir;

	esp = ' ';
	vir = ',';
	if ((i != '7') || (j != '8') || (n != '9'))
	{
		write(1, &vir, 1);
		write(1, &esp, 1);
	}
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	n;

	i = '0';
	j = '1';
	n = '2';
	while (i <= '7')
	{	
		while (j <= '8')
		{
			while (n <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &n, 1);
				ft_fin(i, j, n);
				n++;
			}
			j++;
			n = j + 1;
		}
		i++;
		j = i;
	}
}
