/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 23:12:19 by scai              #+#    #+#             */
/*   Updated: 2019/05/23 10:48:58 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a fresh link; content and content_size of the new link
** are initialized by copy of the parameters given; if the parameter content
** is nul the variable content_size is initialized to 0 regardless of the
** content_size given (correction);
** If there is not memory in the heap to allocate the given content_size, it
** frees the allocated memory for the list pointer, and returns NULL;
** Next is initialized to NULL;
*/

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *fresh;

	if (!(fresh = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
	{
		fresh->content = NULL;
		fresh->content_size = 0;
	}
	else
	{
		if (!(fresh->content = ft_memalloc(content_size)))
		{
			free(fresh);
			return (NULL);
		}
		ft_memcpy(fresh->content, content, content_size);
		fresh->content_size = content_size;
	}
	fresh->next = NULL;
	return (fresh);
}
