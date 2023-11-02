/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:30:30 by orezek            #+#    #+#             */
/*   Updated: 2023/11/02 16:17:18 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t size)
{
	unsigned char		*des;
	const unsigned char	*src;

	des = to;
	src = from;
	if (!des || !src)
		return (to);
	else if (des < src)
	{
		while (size--)
			*(des++) = *(src++);
	}
	else if (des > src)
	{
		des += size;
		src += size;
		while (size--)
			*--des = *--src;
	}
	return (to);
}
