/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isascii.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 19:00:00 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/23 14:23:41 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Werror -Wextra tst_ft_isascii.c ../part1/ft_isascii.c  && ./a.out
int main (void)
{
	char c = 'A';
	int result1 = 0;
	int result2 = 0;

	result1 = ft_isascii(c);
	result2 = isascii(c);
	result1 += 48;
	result2 += 48;
	write(1, &result1, 1);
	write(1, "\n", 1);
	write(1, &result2, 1);
	write(1, "\n", 1);
	return (0);

}
