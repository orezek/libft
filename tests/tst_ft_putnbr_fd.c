/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_putnbr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:03:18 by orezek            #+#    #+#             */
/*   Updated: 2023/10/24 12:04:46 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_putnbr_fd.c ../part2/ft_putnbr_fd.c && ./a.out
int	main(void)
{
	int	max;
	int	min;
	int	n;

	max = 2147483647;
	min = -2147483648;
	n = 123;
	ft_putnbr_fd(min, 1);
	//printf("%d", 9 / 10);
}