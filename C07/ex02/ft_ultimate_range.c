/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 10:46:44 by chaidel           #+#    #+#             */
/*   Updated: 2021/07/06 12:26:42 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	s;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(**range));
	if (!range)
		return (-1);
	s = max - min;
	while (i < s)
		range[0][i++] = min++;
	return (i);
}
