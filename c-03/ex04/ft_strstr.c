/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsorodr <adsorodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:06:08 by adsorodr          #+#    #+#             */
/*   Updated: 2024/07/28 21:17:31 by adsorodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
    int    i;
    int    j;
    
    
	i = 0;
	j = 0;
	while (*(to_find + i) != '\0')
	{
		j = 0;
		while(*(str + j) != *(to_find) && *(str + i))
		{
			j++;
		}
		while(*(str + j) == *(to_find + i) && *(to_find + i) && *(str + j))
		{
			i++;
			j++;
		}
		if (!*(to_find + i))
			return (str + j - i);
		else
			i = 0;
		i++;
	}

    return (str + i);
}

	// e = 0;
	// i = 0;
	// while(*(str + i))
	// {
	// 	j = 0;
	// 	while(*(to_find + j) && e)
	// 	{
	// 		if (*(str + i) == *(to_find + j))
	// 			e = 1;
	// 	}
	// 	i++;
	// }