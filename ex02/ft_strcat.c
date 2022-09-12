/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:26:55 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/09 22:47:48 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	long int	a;
	long int	b;

	a = 0;
	b = 0;
	while (dest[a] != 0)
		a++;
	while (src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = 0;
	return (dest);
}
