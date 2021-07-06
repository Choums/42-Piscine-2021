/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:03:32 by chaidel           #+#    #+#             */
/*   Updated: 2021/07/06 11:56:44 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_str_is_printable(char c)
{
	if (c < 32 || c == 127)
		return (0);
	return (1);
}

void	ft_base(char c)
{
	char	*Hex;

	Hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(Hex[c / 16]);
	ft_putchar(Hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (ft_str_is_printable(*str))
			write(1, str, 1);
		else
			ft_base(*str);
		str++;
	}
}
#include <unistd.h>

void	ft_putstr(char *str)
{
	int l;

	l = 0;
	while (str[l])
	{
		l++;
	}
	write(1, str, l);
}

int		main()
{
	char c[] = "Coucou\ntu vas bien ?";
	ft_putstr("Coucou\\0atu vas bien ?:");
	ft_putstr_non_printable(c);
	char d[] = "\x81\xbe";
	ft_putstr("\n\\81\\be:");
	ft_putstr_non_printable(d);
}
