/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvilnite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 12:01:54 by kvilnite          #+#    #+#             */
/*   Updated: 2018/02/26 12:11:46 by kvilnite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*ds;
	char		*sr;
	size_t		i;

	ds = (char*)dst;
	sr = (char*)src;
	i = 0;
	if (sr < ds)
	{
		while (len--)
			ds[len] = sr[len];
	}
	else
		ft_memcpy(ds, sr, len);
	return (ds);
}
