/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:30:58 by orezek            #+#    #+#             */
/*   Updated: 2023/10/22 17:41:02 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcpy(char *to, const char *from, size_t size)
{
	int			src_size;
	int			sizet;
	const char	*end;

	sizet = (int) size;
	src_size = ft_strlen(from);
	end = from + (sizet - 1);
	if (sizet > src_size)
	{
		while (*from)
			*(to++) = *(from++);
		*to = '\0';
	}
	else if (sizet > 0 && sizet <= src_size)
	{
		while (from < end)
			*(to++) = *(from++);
		*to = '\0';
	}
	return ((size_t) src_size);
}
