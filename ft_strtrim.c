/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 00:05:58 by rel-hach          #+#    #+#             */
/*   Updated: 2021/11/15 05:30:22 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check_chars(char c, char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	len;
	size_t	k;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_check_chars(s1[i], (char *)set) == 1)
		i++;
	if (s1[i] == 0)
		return (ft_strdup(""));
	while (ft_check_chars(s1[len - 1], (char *)set) == 1)
		len--;
	str = (char *)malloc(sizeof(char) * (len - i + 1));
	if (!str)
		return (NULL);
	k = i;
	while (j < len - k)
		str[j++] = s1[i++];
	str[j] = '\0';
	return (str);
}
