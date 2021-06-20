/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharodon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 15:06:50 by tharodon          #+#    #+#             */
/*   Updated: 2021/04/23 19:01:34 by tharodon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	const char	*tmp;
	size_t		bytes;

	if (dst == NULL || src == NULL)
		return (0);
	tmp = src;
	bytes = n;
	if (bytes != 0)
	{
		bytes--;
		while (bytes)
		{
			bytes--;
			if (*src == '\0')
			{
				*dst = '\0';
				break ;
			}
			*dst++ = *src++;
		}
	}
	if (bytes == 0 && n != 0)
		*dst = '\0';
	return (ft_strlen(tmp));
}
