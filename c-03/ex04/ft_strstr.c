/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsorodr <adsorodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:06:08 by adsorodr          #+#    #+#             */
/*   Updated: 2024/07/29 20:28:34 by adsorodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
    int    i;
    int    j;
  
	i = 0;
	j = 0;
	if (!(*to_find))
		return (str);
	while (*(str + i))
	{
		while(*(to_find + j) == *(str + i) && *(to_find + j))
			j++;
		if (*(to_find + j) == '\0' && j != 0)
		{
			return (str + i);
		}
		else
			j = 0;
		i++;
	}
    return (0);
}
