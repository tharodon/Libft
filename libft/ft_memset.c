/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharodon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 14:54:00 by tharodon          #+#    #+#             */
/*   Updated: 2021/04/23 16:52:10 by tharodon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset (void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*r;

	r = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		r[i] = c;
		i++;
	}
	return (b);
}
