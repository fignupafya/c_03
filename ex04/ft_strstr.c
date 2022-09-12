/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:50:10 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/10 09:28:36 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	long int	a;
	long int	b;
	long int	counter;

	a = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[a] != 0)
	{
		b = 0;
		counter = 0;
		while (to_find[b] != 0)
		{
			if (str[a + b] == to_find[b])
				counter++;
			b++;
		}
		if (counter == b)
			return (&str[a]);
		a++;
	}
	return (NULL);
}
