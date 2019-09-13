/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 13:20:30 by scai              #+#    #+#             */
/*   Updated: 2019/05/08 16:51:49 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Coding of non-standard function strdel().
** Parameters: address of a string that needs to be freed and have its pointer
** set to NULL
** Side effect: frees the address pointed to and sets that address to NULL
** Return value: none
*/

void	ft_strdel(char **as)
{
	if (as)
	{
		free(*as);
		*as = NULL;
	}
}
