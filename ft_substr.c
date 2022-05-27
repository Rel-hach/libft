/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 21:40:32 by rel-hach          #+#    #+#             */
/*   Updated: 2021/11/29 20:05:11 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*substr;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	substr = (char *)malloc ((len + 1) * sizeof(char));
	if (substr)
	{
		i = 0;
		j = 0;
		while ((char )s[i])
		{
			if (i >= start && j < len)
				substr[j++] = (char )s[i];
			i++;
		}
		substr[j] = '\0';
		return (substr);
	}
	return (0);
}
