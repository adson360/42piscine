/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsorodr <adsorodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:19:04 by adsorodr          #+#    #+#             */
/*   Updated: 2024/07/31 21:47:32 by adsorodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	count_check(char *base)
{
	int	i;
	int	j;

	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_converted_gt0(int nbr, int size, char *base)
{
	int	temp;
	if (nbr >= size)
	{
		temp = nbr / size;
		put_converted_gt0(temp, size, base);
	}
	ft_putchar(base[nbr % size]);
	
}

void	ft_putnbr_base(int nbr, char *base)
{
	// int		n;
	int		size;
	// char	*tmp;

	size = count_check(base);
	if (size <= 1)
		return;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = -nbr;
	}
	put_converted_gt0(nbr, size, base);
}
