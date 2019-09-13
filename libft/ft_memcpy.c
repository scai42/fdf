/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 20:19:32 by scai              #+#    #+#             */
/*   Updated: 2019/05/23 09:40:48 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Copies n bytes from src to dst; beheavior is undefined if memory areas
** overlap. I.e. seg-fault, crash; use memmove instead
** Returns the original address of dst.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src && n)
		return (NULL);
	while (n--)
		((unsigned char*)dst)[n] = ((unsigned char*)src)[n];
	return (dst);
}
