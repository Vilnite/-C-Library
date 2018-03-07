/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvilnite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 16:12:02 by kvilnite          #+#    #+#             */
/*   Updated: 2018/02/22 16:20:55 by kvilnite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*new;

	if (!s1 || !s2 || !(new = ft_strnew((ft_strlen(s1) + ft_strlen(s2)))))
		return (NULL);
	new = ft_strcpy(new, s1);
	new = ft_strcat(new, s2);
	return (new);
}
