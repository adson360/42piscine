/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsorodr <adsorodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:52:54 by adsorodr          #+#    #+#             */
/*   Updated: 2024/07/18 12:55:54 by adsorodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		char	temp_c;

		temp_c = src[i];
		dest[i] = temp_c;
		i++;
	}
	if (dest[i] != '\0')
		dest[i] = '\0'; 
	
	write(1, &dest[i+1], 1);

	return (dest);
}