/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 20:19:17 by chaidel           #+#    #+#             */
/*   Updated: 2021/07/04 20:36:30 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	i = 1;
	n = 1;
	if (power < 0)
		return (0);
	if (!nb && !power)
		return (1);
	if (power == 1)
		return (nb);
	while (i <= power)
	{
		n *= nb;
		i++;
	}
	return (n);
}
