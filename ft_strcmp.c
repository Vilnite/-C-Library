/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvilnite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 11:20:44 by kvilnite          #+#    #+#             */
/*   Updated: 2018/02/22 11:31:29 by kvilnite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t		len;
	size_t		len2;
	int			res;

	len = ft_strlen(s1) + 1;
	len2 = ft_strlen(s2) + 1;
	len = (len <= len2) ? len : len2;
	res = ft_memcmp(s1, s2, len);
	return (res);
}
