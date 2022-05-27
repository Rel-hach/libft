/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:11:03 by rel-hach          #+#    #+#             */
/*   Updated: 2021/11/03 16:40:46 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ns;
	unsigned char	nc;

	i = 0;
	ns = (unsigned char *)s;
	nc = (unsigned char)c;
	if (n == 0)
	{
		return (NULL);
	}
	while (i < n)
	{
		if (ns[i] == nc)
		{
			return ((void *)ns + i);
		}
		i++;
	}
	return (0);
}
