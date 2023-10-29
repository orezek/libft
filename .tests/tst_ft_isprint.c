/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:37:54 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/23 13:59:36 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//c -Wall -Wextra -Werror tst_ft_isprint.c ../part1/ft_isprint.c && ./a.out
int	main (void)
{
	char	c = 'A';
	int result1;
	int result2;
	result1 = ft_isprint(c);
	result2 = isprint(c);
	result1 += 48;
	result2 += 48;
	write(1, &result1, 1);
	write(1, "\n", 1);
	write(1, &result2, 1);
	write(1, "\n", 1);
	return (0);
}
