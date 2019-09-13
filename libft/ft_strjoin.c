/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:06:10 by scai              #+#    #+#             */
/*   Updated: 2019/05/22 22:42:54 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Approach: first ensure strings to concatenate exist;
** If so, allocate new memory using ft_strnew;
** Use standard functions strcpy and strcat to create "fresh" string
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*fresh;

	if (s1 && s2)
	{
		len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
		fresh = ft_strnew(len);
		if (!fresh)
			return (NULL);
		ft_strcpy(fresh, (char *)s1);
		ft_strcat(fresh, s2);
		return (fresh);
	}
	return (NULL);
}
