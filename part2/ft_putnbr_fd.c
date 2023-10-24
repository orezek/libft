/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:37:40 by orezek            #+#    #+#             */
/*   Updated: 2023/10/24 11:49:45 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char			c;
	long long		number;
	long long		reversed;

	number = (long long) n;
	reversed = 0;
	if (number < 0)
	{
		number *= -1;
		write(fd, "-", 1);
	}
	else if (number == 0)
		write(fd, "0", 1);
	while (number != 0)
	{
		reversed = reversed * 10 + (number % 10);
		number /= 10;
	}
	while (reversed != 0)
	{
		c = ((char)(reversed % 10)) + 48;
		write(fd, &c, 1);
		reversed /= 10;
	}

}
