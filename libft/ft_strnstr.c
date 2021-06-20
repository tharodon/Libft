/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharodon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/18 16:32:09 by tharodon          #+#    #+#             */
/*   Updated: 2021/04/25 21:09:59 by tharodon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr (const char *hay, const char *ned, size_t len)
{
	size_t	i;
	size_t	b;

	i = 0;
	b = 0;
	if (!hay && !ned)
		return (NULL);
	if (ned[0] == '\0')
		return ((char *)hay);
	while (hay[i] != '\0' && i < len)
	{
		b = 0;
		if (hay[i] == ned[b])
		{
			while (hay[i + b] == ned[b] && b + i < len && hay[i + b] && ned[b])
				b++;
			if (ned[b] == '\0')
				return ((char *)hay + i);
		}
		i++;
	}
	return (NULL);
}
