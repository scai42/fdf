/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 00:32:39 by scai              #+#    #+#             */
/*   Updated: 2019/05/23 12:12:49 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_lstsize(t_list *lst)
{
	size_t	size;
	t_list	*hold;

	size = 0;
	hold = lst;
	while (lst)
	{
		lst = lst->next;
		size += 1;
	}
	lst = hold;
	return (size);
}
