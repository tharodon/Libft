/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharodon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 18:15:42 by tharodon          #+#    #+#             */
/*   Updated: 2021/04/21 17:35:11 by tharodon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat (char *dst, const char *src, size_t len)
{
	size_t		length;
	char		*d;
	const char	*s;

	length = ft_strlen(src) + ft_strlen(dst);
	if (len <= ft_strlen(dst) || len <= 0)
		return (len + ft_strlen(src));
	d = dst;
	s = src;
	len--;
	while (*d && len--)
		d++;
	while (*s && len--)
		*d++ = *s++;
	*d = '\0';
	return (length);
}
