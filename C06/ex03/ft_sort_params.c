/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 16:01:05 by chaidel           #+#    #+#             */
/*   Updated: 2021/07/04 16:50:23 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_params(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, &"\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < argc)
	{
		j = 1;
		while (j < (argc - i))
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				swap = argv[j + 1];
				argv[j + 1] = argv[j];
				argv[j] = swap;
			}
			j++;
		}
		i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
