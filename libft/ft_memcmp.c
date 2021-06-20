/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharodon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 22:20:05 by tharodon          #+#    #+#             */
/*   Updated: 2021/04/20 15:29:34 by tharodon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp (const void *s1, const void *s2, size_t len)
{
	size_t					i;
	unsigned const char		*s;
	unsigned const char		*d;

	i = 0;
	s = (unsigned const char *)s1;
	d = (unsigned const char *)s2;
	while (i < len)
	{
		if (s[i] < d[i])
			return (s[i] - d[i]);
		if (s[i] > d[i])
			return (s[i] - d[i]);
		i++;
	}
	return (0);
}
