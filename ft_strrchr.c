/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:39:18 by rel-hach          #+#    #+#             */
/*   Updated: 2021/11/03 15:51:23 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*str;
	char	ch;

	str = (char *)s;
	ch = (char )c;
	len = ft_strlen(s);
	if (ch == '\0')
		return (&str[len]);
	while (len--)
	{
		if (s[len] == (char)c)
			return (&str[len]);
	}
	return (NULL);
}
