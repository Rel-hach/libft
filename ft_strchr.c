/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 16:10:11 by rel-hach          #+#    #+#             */
/*   Updated: 2021/11/13 16:10:45 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	b;
	int		i;

	b = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == b)
			return ((char *)(&s[i]));
		i++;
	}
	if (s[i] == c)
	{
		return ((char *)(&s[i]));
	}
	return (NULL);
}
