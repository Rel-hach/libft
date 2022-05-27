/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 17:27:12 by rel-hach          #+#    #+#             */
/*   Updated: 2021/11/04 17:47:13 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;

	str = (void *)malloc(count * size);
	if (!str)
	{
		return (NULL);
	}
	ft_bzero (str, count * size);
	return ((void *)(str));
}
