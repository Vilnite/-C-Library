/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvilnite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 11:49:41 by kvilnite          #+#    #+#             */
/*   Updated: 2018/02/26 12:00:39 by kvilnite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*dest;
	unsigned char		*sour;
	unsigned char		a;

	i = 0;
	dest = (unsigned char*)dst;
	sour = (unsigned char*)src;
	a = (unsigned char)c;
	while (i < n)
	{
		if ((dest[i] = sour[i]) == a)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
