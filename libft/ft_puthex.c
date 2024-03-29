/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scai <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 13:38:55 by scai              #+#    #+#             */
/*   Updated: 2019/08/19 13:39:55 by scai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_puthex(int n)
{
	if (n >= 16)
		ft_puthex(n / 16);
	n %= 16;
	n += (n < 10) ? '0' : 'a' - 10;
	write(1, &n, sizeof(char));
}
