/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvilnite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 15:12:47 by kvilnite          #+#    #+#             */
/*   Updated: 2018/02/22 15:16:24 by kvilnite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	char				*str;
	unsigned int		count;

	str = (char*)s;
	if (str && f)
	{
		count = 0;
		while (str[count])
		{
			(*f)(count, &str[count]);
			count++;
		}
	}
}
