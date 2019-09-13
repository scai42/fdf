/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 14:26:15 by scai              #+#    #+#             */
/*   Updated: 2019/05/09 17:04:40 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while (hay[i] && (i < len))
	{
		while ((hay[i + j] == ndl[j]) && ndl[j] && ((i + j) < len))
			j++;
		if (!ndl[j])
			return ((char *)&hay[i]);
		j = 0;
		i++;
	}
	if (!ndl[0])
		return ((char *)&hay[i]);
	return (NULL);
}
