/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rel-hach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:50:12 by rel-hach          #+#    #+#             */
/*   Updated: 2021/11/05 20:51:11 by rel-hach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_calculate(int n)
{
	int	s;

	s = 0;
	if (n == 0)
		return (1);
	if (n == -2147483648)
		return (11);
	if (n <= 0)
	{
		n = -n;
		s += 1;
	}
	while (n > 0)
	{
		n = n / 10;
		s++;
	}
	return (s);
}

static	char	*ft_convert(char *s, int j, int i, int n)
{
	while (j > 0 && i >= 0)
	{
		if (s[0] == '-' && i == 0)
			return (s);
		if (n < 0)
			s[i--] = n % 10 * -1 + 48;
		if (n >= 0)
			s[i--] = n % 10 + 48;
		n = n / 10;
		j--;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int		j;
	char	*s;
	int		i;

	j = ft_calculate(n);
	s = (char *) malloc((j + 1) * sizeof(char));
	if (s == '\0')
		return (NULL);
	i = j;
	if (n < 0)
		s[0] = '-';
	s[i--] = '\0';
	if (n == 0)
		s[0] = 0;
	s = ft_convert(s, j, i, n);
	return (s);
}
