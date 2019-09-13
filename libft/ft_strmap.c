/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 19:19:16 by scai              #+#    #+#             */
/*   Updated: 2019/05/22 22:42:11 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Apply the function f to each character of the parameter string,
** create a new string with the result, and return it.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	char		*fresh;

	i = 0;
	if (s && f)
	{
		fresh = ft_strnew(ft_strlen((s)));
		if (!fresh)
			return (NULL);
		while (s[i])
		{
			fresh[i] = f(s[i]);
			i++;
		}
		fresh[i++] = 0;
		return (fresh);
	}
	return (NULL);
}
