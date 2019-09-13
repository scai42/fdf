/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 16:11:49 by scai              #+#    #+#             */
/*   Updated: 2019/05/22 19:35:28 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocates and returns a fresh substring from s;
** Substring begins at "start" and is size of len;
** Test cases: start + len in memory isn't a valid substring
** Equivalent to strndup with 0 as second parameter
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *fresh;

	fresh = ft_strnew(len);
	if (!fresh || !s || (ft_strlen(s) < start + len))
		return (NULL);
	fresh[len] = '\0';
	while (len-- && fresh)
		fresh[len] = s[start + len];
	return (fresh);
}
