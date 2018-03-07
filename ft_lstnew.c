/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvilnite <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 14:28:26 by kvilnite          #+#    #+#             */
/*   Updated: 2018/03/01 14:28:30 by kvilnite         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *new;

	new = NULL;
	if ((new = (t_list*)ft_memalloc(sizeof(t_list))))
	{
		if (content)
		{
			new->content = ft_memalloc(content_size);
			if (!new->content)
				return (NULL);
			ft_memcpy(new->content, content, content_size);
			new->content_size = content_size;
		}
		else
		{
			new->content = NULL;
			new->content_size = 0;
		}
		new->next = NULL;
	}
	return (new);
}
