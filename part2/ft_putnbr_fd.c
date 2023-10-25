/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:37:40 by orezek            #+#    #+#             */
/*   Updated: 2023/10/25 10:01:11 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	ft_nzero(long n)
{
	int			result;
	long long	number;

	number = n;
	result = 0;
	while (n != 0 && n % 10 == 0)
	{
		result++;
		n /= 10;
	}
	return (result);
}

static long long	ft_nreverse(long n)
{
	long long	reversed;
	int			n_zero;

	reversed = 0;
	n_zero = ft_nzero(n);
	while (n != 0)
	{
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}
	while (n_zero-- > 0)
		reversed *= 10;
	return (reversed);
}

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
	reversed = ft_nreverse(number);
	while (reversed != 0)
	{
		c = ((char)(reversed % 10)) + 48;
		write(fd, &c, 1);
		reversed /= 10;
	}

}
