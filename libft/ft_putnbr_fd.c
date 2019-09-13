/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 00:58:36 by scai              #+#    #+#             */
/*   Updated: 2019/05/22 23:59:52 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Instead of using recursion and treating I_MIN as a special case, handling
** like print_hex, bits, base-10 (with negative)
*/

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	ab;
	int				tmp;
	int				len;
	char			c;

	ab = (unsigned int)n;
	if (n < 0)
		ft_putchar_fd('-', fd);
	ab = (n < 0) ? ((unsigned int)((unsigned int)n * -1)) : n;
	len = 1;
	tmp = n / 10;
	while (tmp)
	{
		tmp /= 10;
		len += 1;
	}
	tmp += 1;
	while (len--)
	{
		c = (ab / ft_power(10, len)) % 10 + '0';
		ft_putchar_fd(c, fd);
	}
}
