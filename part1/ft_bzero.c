/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:28:46 by orezek            #+#    #+#             */
/*   Updated: 2023/10/21 19:32:10 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *block, size_t size)
{
	int				start;
	unsigned char	*ptr;

	ptr = (unsigned char *) block;
	start = 0;
	while (start < size)
	{
		*(ptr + start) = 0;
		start++;
	}
}
