/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:30:36 by orezek            #+#    #+#             */
/*   Updated: 2023/10/20 23:45:42 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void *block, int c, size_t size)
{
	unsigned char	filler;
	unsigned char	*ptr;
	int				limit;

	filler = (unsigned char) c;
	ptr = (unsigned char *) block;
	limit = 0;
	while (limit < size)
	{
		*ptr = filler;
		limit++;
		ptr++;
	}
	return (ptr - size);
}
