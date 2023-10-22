/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:30:25 by orezek            #+#    #+#             */
/*   Updated: 2023/10/22 08:36:20 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *to, const void *from, size_t size)
{
	size_t			step;
	unsigned char	*toptr;
	const unsigned char	*fromptr;

	toptr = (unsigned char *) to;
	fromptr = (unsigned char *) from;
	step = 0;
	while (step < size)
	{
		*(toptr + step) = *(fromptr + step);
		step++;
	}
	return ((void *) toptr);
}
