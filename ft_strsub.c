/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvilnite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:03:15 by kvilnite          #+#    #+#             */
/*   Updated: 2018/02/22 16:11:41 by kvilnite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char				*new;
	char				*str;
	unsigned int		count;

	if (!(new = ft_strnew(len)) || !s)
		return (NULL);
	str = (char*)s;
	count = 0;
	while (count < len)
	{
		new[count] = str[start];
		start++;
		count++;
	}
	return (new);
}
