/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acigerim <acigerim@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:40:24 by acigerim          #+#    #+#             */
/*   Updated: 2022/09/09 22:48:18 by acigerim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	long int	a;
	long int	b;

	a = 0;
	b = 0;
	while (dest[a] != 0)
		a++;
	while (nb > 0 && src[b] != 0)
	{
		dest[a] = src[b];
		a++;
		b++;
		nb--;
	}
	dest[a] = 0;
	return (dest);
}
