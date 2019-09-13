/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 20:18:10 by scai              #+#    #+#             */
/*   Updated: 2019/05/23 15:59:23 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterates a list "lst" and applies function f to each link to create a "fresh"
** list allocated after the function is applied.
** (*f) takes a pointer to a node-type t_list and returns another pointer to
** struct-type t_list; thus, it's unpredictable how it could alter members and
** potentially incorrectly allocate memory;
** Besides incrementing the nodes, the  while-loop is also checking if we can
** access the memory created by f(lst); if not, the function should free the
** struct pointer in fresh (i.e. setting to NULL) and return NULL to indicate
** the error. Test cases: null parameter, single-node list, faulty function.
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*head;

	if (!lst)
		return (NULL);
	fresh = f(lst);
	head = fresh;
	while (lst->next)
	{
		lst = lst->next;
		if (!(fresh->next = f(lst)))
		{
			free(fresh->next);
			return (NULL);
		}
		fresh = fresh->next;
	}
	return (head);
}
