/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:37:40 by orezek            #+#    #+#             */
/*   Updated: 2023/10/30 12:33:53 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*ptr;
	char	*or_ptr;

	ptr = ft_itoa(n);
	or_ptr = ptr;
	while (*ptr)
		write(fd, ptr++, 1);
	free(or_ptr);
}
