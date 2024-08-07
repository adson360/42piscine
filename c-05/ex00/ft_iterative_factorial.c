/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsorodr <adsorodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 23:08:33 by adsorodr          #+#    #+#             */
/*   Updated: 2024/08/01 12:42:29 by adsorodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = 1;
	if (nb < 0)
		return (0);
	if (nb > 12 || nb < -12)
		return (0);
	if (nb == 1 || nb == 0)
		return (1);
	while (nb > 1)
		n = n * (nb--);
	return (n);
}
