/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:30:30 by orezek            #+#    #+#             */
/*   Updated: 2023/11/01 18:45:22 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *to, const void *from, size_t size)
{
	unsigned char		*des;
	const unsigned char	*src;

	des = to;
	src = from;
	if (!des & !src)
		return (to);
	if (des < src)
	{
		while ((int) size--)
			*(des++) = *(src++);
	}
	else
	{
		while ((int) size--)
			*(des + size) = *(src + size);
	}
	return (to);
}
