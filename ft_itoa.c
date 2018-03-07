/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvilnite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 17:06:41 by kvilnite          #+#    #+#             */
/*   Updated: 2018/02/22 17:24:22 by kvilnite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	get_str_len(int n)
{
	size_t		i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char				*str;
	size_t				str_len;
	unsigned int		new_cpy;

	str_len = get_str_len(n);
	new_cpy = n;
	if (n < 0)
	{
		new_cpy = -n;
		str_len++;
	}
	if (!(str = ft_strnew(str_len)))
		return (NULL);
	str[--str_len] = new_cpy % 10 + '0';
	while (new_cpy /= 10)
		str[--str_len] = new_cpy % 10 + '0';
	if (n < 0)
		*(str + 0) = '-';
	return (str);
}
