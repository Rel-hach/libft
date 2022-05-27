/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:34:54 by rel-hach          #+#    #+#             */
/*   Updated: 2021/11/14 03:44:56 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	int				i;

	nb = (unsigned int)n;
	i = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -n;
	}
	if (nb >= 0 && nb <= 9)
	{
		ft_putchar_fd(nb + '0', fd);
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
}
