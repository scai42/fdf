/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 13:25:56 by scai              #+#    #+#             */
/*   Updated: 2019/05/22 19:36:22 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*cat;

	i = 0;
	cat = dst;
	if (!dstsize || dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (dst[i])
		i++;
	while (dstsize - 1 > i && *src)
	{
		dst[i] = *src++;
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(cat) + ft_strlen(src));
}
