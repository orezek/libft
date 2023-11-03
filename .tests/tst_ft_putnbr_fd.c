/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_putnbr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 10:03:18 by orezek            #+#    #+#             */
/*   Updated: 2023/11/03 13:53:33 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_putnbr_fd.c ../part2/ft_putnbr_fd.c && ./a.out
//cc -fsanitize=address ./.tests/tst_ft_putnbr_fd.c ft_putnbr_fd.c ft_itoa.c&& ./a.out
//cc -fsanitize=leak ./.tests/tst_ft_putnbr_fd.c ft_putnbr_fd.c ft_itoa.c&& ./a.out
int	main(void)
{
	int	max;
	int	min;
	int	n;

	max = 2147483647;
	min = -2147483648;
	n = 1000;
	ft_putnbr_fd(10000, 1);
	//printf("%d", 9 / 10);
}
