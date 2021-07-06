/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 20:43:01 by chaidel           #+#    #+#             */
/*   Updated: 2021/07/05 18:49:03 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	n;
	unsigned int	dlen;
	char			*d;
	char			*s;

	d = dest;
	s = src;
	n = size;
	while (n-- && *d)
		d++;
	dlen = d - dest;
	n = size - dlen;
	if (!n)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n > 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}
