/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:37:54 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/19 18:58:02 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//c tst_ft_isprint.c ../part1/ft_isprint.c && ./a.out
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
}
