/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:29:57 by scai              #+#    #+#             */
/*   Updated: 2019/08/19 13:38:36 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * The C standard (both the 1999 and 2011 editions) doesn't require intmax_t to be one of the standard types; it's required to be "a signed integer type capable of representing any value of any signed integer type". In particular, it can be an extended integer type
*/

long	ft_htoi(char *s)
{
	long	n;
	n = 0;
	while (*s)
	{
		n *= 16;
		if (*s >= 'A' && *s <= 'F')
			n += *s - 'A' + 10;
		else
			n += ft_isdigit(*s) ? *s - '0' : *s - 'a' + 10;
		++s;
	}
	return (n);
}

long	ft_strtol(char *str, char **endptr, int base)
{
}
