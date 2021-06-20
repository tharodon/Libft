/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tharodon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 19:50:29 by tharodon          #+#    #+#             */
/*   Updated: 2021/04/26 21:16:57 by tharodon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char	*ft_strtrim (char const *s1, char const *set)
{
	size_t	i;
	size_t	end;
	size_t	b;
	char	*r;

	i = 0;
	b = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[end]) && end != i)
		end--;
	r = (char *)malloc(end - i + 2);
	if (r == NULL)
		return (NULL);
	while (i <= end)
		r[b++] = s1[i++];
	r[b] = '\0';
	return (r);
}
