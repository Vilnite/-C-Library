/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvilnite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:46:36 by kvilnite          #+#    #+#             */
/*   Updated: 2018/02/22 14:52:44 by kvilnite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*new;
	size_t		i;

	if ((new = ft_memalloc(++size)))
	{
		i = 0;
		while (i < size)
		{
			new[i] = '\0';
			i++;
		}
		return (new);
	}
	return (NULL);
}
