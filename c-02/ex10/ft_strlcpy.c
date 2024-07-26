/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsorodr <adsorodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 15:46:01 by adsorodr          #+#    #+#             */
/*   Updated: 2024/07/26 19:53:27 by adsorodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	while(src[i])
		i++;
	while(j < size)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	dest[size -1] = '\0';
	return (i);
}
