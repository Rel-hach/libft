/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 16:59:21 by rel-hach          #+#    #+#             */
/*   Updated: 2021/11/29 19:45:12 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	size;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && len != 0)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			size = len;
			while (haystack[i + j] == needle[j] && size != 0)
			{
				j++;
				size--;
				if (needle[j] == '\0')
					return ((char *)&haystack[i]);
			}
		}
		i++;
		len--;
	}
	return (0);
}
