/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:12:57 by rel-hach          #+#    #+#             */
/*   Updated: 2021/12/06 13:17:40 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*ndest;
	char	*nsrc;

	if (!dest && !src)
		return (NULL);
	ndest = (char *)dest;
	nsrc = (char *)src;
	while (n > 0)
	{
		*ndest = *nsrc;
		ndest++;
		nsrc++;
		n--;
	}
	return (dest);
}
