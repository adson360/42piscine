/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adsorodr <adsorodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 18:06:08 by adsorodr          #+#    #+#             */
/*   Updated: 2024/07/29 14:38:47 by adsorodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((*(s1 + i) == *(s2 + i)) && *(s1 + i) && *(s2 + i))
		i++;
	return (*(s1 + i) - *(s2 + i));
}

char	*ft_strstr(char *str, char *to_find)
{
    int    i;
  
	i = 0;
	if ((*to_find) == '\0')
		return (str);
	while (*(str + i))
	{
		while (ft_strcmp((str + i), (to_find)) < 0)
			i++;
		if (ft_strcmp((str + i), (to_find)) >= 0)
			return (str + i);
		i++;
	}
    return (0);
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