/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 13:55:49 by chaidel           #+#    #+#             */
/*   Updated: 2021/07/07 12:28:15 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == -1 || c == 32)
		return (1);
	return (0);
}

int	ft_checkbase(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) < 2)
		return (0);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || ft_isspace(str[i]))
			return (0);
		j = i + 1;
		while (str[j])
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				len;
	int				dis[20];
	int				i;
	unsigned int	n;
	
	i = 0;
	len = 0;
	n = 0;
	if (ft_checkbase(base))
	{
		if (nbr < 0)
		{
			ft_putchar('-');
			n = -nbr;
		}
		len = ft_strlen(base);
		while (n > 0)
		{
			dis[i] = n % len;
			n /= len;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[dis[i]]);
	}
}

int	main(void)
{
	char *base = "01";
	ft_putnbr_base(20, base);
	return (0);
}
