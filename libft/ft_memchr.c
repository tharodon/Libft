/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharodon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 21:39:37 by tharodon          #+#    #+#             */
/*   Updated: 2021/04/19 22:16:48 by tharodon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr (const void *s, int c, size_t len)
{
	size_t					i;
	unsigned const char		*b;

	i = 0;
	b = (unsigned const char *)s;
	while (i < len)
	{
		if (b[i] == (unsigned char)c)
			return ((void *)b + i);
		i++;
	}
	return (NULL);
}
