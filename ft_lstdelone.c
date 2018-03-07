/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvilnite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 14:25:14 by kvilnite          #+#    #+#             */
/*   Updated: 2018/03/01 14:25:18 by kvilnite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (!(alst || del))
		return ;
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = 0;
	return ;
}
