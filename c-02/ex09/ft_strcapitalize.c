/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsorodr <adsorodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:47:58 by adsorodr          #+#    #+#             */
/*   Updated: 2024/07/22 14:56:44 by adsorodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] += 32;
		i++;
	}
	return (str);
}

int	chk_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int	chk_uppercase(char c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	return (0);
}

int	chk_numeric(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	str = ft_strlowcase(str);
	if (chk_lowercase(str[0]))
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (!((chk_lowercase(str[i - 1]))
				|| (chk_uppercase(str[i - 1]))
				|| chk_numeric(str[1 - 1])))
		{
			if (chk_lowercase(str[i]))
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
