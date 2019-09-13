/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 22:28:29 by scai              #+#    #+#             */
/*   Updated: 2019/05/23 00:08:47 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (!dst && !src && len)
		return (NULL);
	if (dst > src)
		while (len--)
			((unsigned char*)dst)[len] = ((unsigned char*)src)[len];
	else
		while (++i < len)
			((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
	return (dst);
}
