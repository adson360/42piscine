/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsorodr <adsorodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:52:54 by adsorodr          #+#    #+#             */
/*   Updated: 2024/07/18 13:13:06 by adsorodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	temp_c;

	i = 0;
	while (src[i])
	{
		temp_c = src[i];
		dest[i] = temp_c;
		i++;
	}
	if (dest[i] != '\0')
		dest[i] = '\0';
	return (dest);
}