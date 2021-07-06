/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 21:08:25 by chaidel           #+#    #+#             */
/*   Updated: 2021/06/30 21:59:04 by chaidel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_str_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_str_lowcase(str);
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] += -32;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i - 1] >= 'a' && str[i - 1] <= 'z'))
			{
				if (!(str[i - 1] >= '0' && str[i - 1] <= '9'))
				{
					if (!(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
						str[i] += -32;
				}
			}
		}
		i++;
	}
	return (str);
}
