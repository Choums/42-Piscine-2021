/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 04:32:03 by chaidel           #+#    #+#             */
/*   Updated: 2021/06/30 04:42:21 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{	
	int	i;
	int	s;
	int	swap;

	i = 0;
	s = size - 1;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[s];
		tab[s] = swap;
		i++;
		s--;
	}
}
