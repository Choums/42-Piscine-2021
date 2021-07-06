/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:39:27 by chaidel           #+#    #+#             */
/*   Updated: 2021/07/06 19:56:21 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	n = ft_strlen(dest);
	while (src[i])
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		n;

	i = 0;
	n = 0;
	if (!size)
	{
		str = (char *)malloc(sizeof(*str));
		return (str);
	}
	while (i < size)
		n += ft_strlen(strs[i++]);
	str = (char *)malloc(sizeof(*str) * n + (ft_strlen(sep) * (i - 1) + 1));
	if (!str)
		return (0);
	str[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_strcat(str, strs[i]);
		if (i < size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}
