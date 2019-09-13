/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmerge.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 17:05:58 by scai              #+#    #+#             */
/*   Updated: 2019/08/16 17:07:27 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_strjoindel: uses strong join and deletes (cleans) both input strings
*/

char	*ft_strmerge(char *a, char *b)
{
	char	*c;
	c = ft_strjoin(a, b);
	ft_strdel(&a);
	ft_strdel(&b);
	return (c);
}
