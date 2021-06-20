/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharodon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 19:29:09 by tharodon          #+#    #+#             */
/*   Updated: 2021/04/21 18:18:43 by tharodon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memccpy (void *dest, const void *src, int c, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < len)
	{
		if (s[i] == (unsigned char)c)
		{
			d[i] = s[i];
			return (d + (i + 1));
		}
		d[i] = s[i];
		i++;
	}
	return (NULL);
}
