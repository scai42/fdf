/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 17:20:52 by scai              #+#    #+#             */
/*   Updated: 2019/05/23 01:13:29 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Iterating through trimmable spaces;
** If all trim, return an empty string (size_t = 0)
** Else, set start to new pointer address;
** Iterating until terminating character and repeating trimming process;
** Using new start pointer and end ptr to calculate len for ft_strsub;
*/

char	*ft_strtrim(char const *s)
{
	char	*start;
	char	*trim;

	if (!s)
		return (NULL);
	while (ISTRIM(*s))
		s++;
	if (!*s)
		return (ft_strnew(0));
	start = (char *)s;
	while (*s)
		s++;
	s--;
	while (ISTRIM(*s))
		s--;
	trim = ft_strsub(start, 0, s - start + 1);
	if (!trim)
		return (NULL);
	return (trim);
}
