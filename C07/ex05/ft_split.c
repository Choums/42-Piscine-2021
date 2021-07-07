/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:27:00 by chaidel           #+#    #+#             */
/*   Updated: 2021/07/07 18:56:37 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *sep)
{
	int	count;

	count = 0;
	while (((is_sep(*str, sep)) == 1) && *str)
		str++;
	while (*str)
	{
		count++;
		while ((is_sep(*str, sep) == 0) && *str)
			str++;
		while ((is_sep(*str, sep) == 1) && *str)
			str++;
	}
	return (count);
}

char	*cut_dup(char *str, char *sep)
{
	int		len;
	char	*cut;
	int		i;

	len = 0;
	i = 0;
	while (((is_sep(str[len], sep)) == 0) && str[len])
		len++;
	cut = (char *)malloc(sizeof(*cut) * (len + 1));
	if (!cut)
		return (0);
	while (i < len)
	{
		cut[i] = str[i];
		i++;
	}
	cut[len] = '\0';
	return (cut);
}

void	paste_dup(char *str, char **tab, char *sep)
{	
	int	i;

	i = 0;
	while (((is_sep(*str, sep)) == 1) && *str)
		str++;
	while (*str)
	{
		tab[i] = cut_dup(str, sep);
		i++;
		while ((is_sep(*str, sep) == 0) && *str)
			str++;
		while ((is_sep(*str, sep) == 1) && *str)
			str++;
	}
}

char	**ft_split(char *str, char *sep)
{
	char	**tab;
	int		n;

	n = count_words(str, sep);
	tab = malloc(sizeof(*tab) * n + 1);
	tab[n] = 0;
	paste_dup(str, tab, sep);
	return (tab);
}
