/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:30:30 by orezek            #+#    #+#             */
/*   Updated: 2023/10/22 12:50:38 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memmove(void *to, const void *from, size_t size)
{
	unsigned char		*des;
	const unsigned char	*src;
	int					step;

	des = to;
	src = from;
	if (des < (src + (size - 1)) && des > src)
	{
		step = (int) (size - 1);
		while (step >= 0)
		{
			*(des + step) = *(src + step);
			step--;
		}
	}
	else
	{
		step = 0;
		while (step < (int) size)
		{
			*(des + step) = *(src + step);
			step++;
		}
	}
	return ((void *) des);
}
