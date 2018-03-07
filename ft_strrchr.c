/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvilnite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 10:51:35 by kvilnite          #+#    #+#             */
/*   Updated: 2018/02/22 10:57:22 by kvilnite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char		*str;

	str = (char*)s + ft_strlen(s);
	while (*str != c)
	{
		if (str == s)
		{
			return (0);
		}
		str--;
	}
	return (str);
}
