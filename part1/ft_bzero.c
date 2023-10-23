/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:28:46 by orezek            #+#    #+#             */
/*   Updated: 2023/10/23 14:01:39 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_bzero(void *block, size_t size)
{
	int				start;
	unsigned char	*ptr;

	ptr = (unsigned char *) block;
	start = 0;
	while (start < (int) size)
	{
		*(ptr + start) = 0;
		start++;
	}
}
