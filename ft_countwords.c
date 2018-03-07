/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvilnite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 20:39:41 by kvilnite          #+#    #+#             */
/*   Updated: 2018/02/27 20:39:43 by kvilnite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countwords(char const *str, char c)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
		while (str[i] == c)
			i++;
	if (str[i] != c && str[i] != '\0')
		count++;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (count);
}
