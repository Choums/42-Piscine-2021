/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 20:38:36 by chaidel           #+#    #+#             */
/*   Updated: 2021/07/06 12:31:10 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	s;

	i = 0;
	if (min >= max)
	{
		tab = NULL;
		return (tab);
	}
	tab = (int *)malloc((max - min) * sizeof(*tab));
	if (!tab)
		return (0);
	s = max - min;
	while (i < s)
		tab[i++] = min++;
	return (tab);
}
