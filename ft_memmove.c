/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:05:58 by rel-hach          #+#    #+#             */
/*   Updated: 2021/11/10 19:11:09 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *sr, size_t len)
{
	char	*dest;
	char	*src;
	size_t	i;

	i = 0;
	if (!dst && !sr)
		return (NULL);
	dest = (char *)dst;
	src = (char *)sr;
	if (src < dest)
	{
		while (i++ < len)
			dest[len - i] = src[len - i];
	}
	else
	{
		while (len-- > 0)
			*(dest++) = *(src++);
	}
	return (dst);
}
