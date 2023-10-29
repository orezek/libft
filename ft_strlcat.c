/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:30:47 by orezek            #+#    #+#             */
/*   Updated: 2023/10/29 16:54:40 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *to, const char *from, size_t size)
{
	int		src_len;
	int		dst_len;
	size_t	step;

	src_len = ft_strlen(from);
	dst_len = ft_strlen(to);
	step = dst_len;
	to += dst_len;
	if (src_len + dst_len >= (int) size)
	{
		while (step++ < size - 1)
			*(to++) = *(from++);
		*to = '\0';
	}
	else
	{
		step = dst_len;
		while (step++ < size)
			*(to++) = *(from++);
		*to = '\0';
	}
	return (src_len + dst_len);
}
