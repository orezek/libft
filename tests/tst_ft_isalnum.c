/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isalnum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:47:43 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/19 19:13:20 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_isalnum.c ../part1/ft_isalnum.c ../part1/ft_isalpha.c ../part1/ft_isdigit.c && ./a.out

int main (void)
{
	char c = '#';
	int result1 = 0;
	int result2 = 0;

	result1 = ft_isalnum(c);
	result2 = isalnum(c);
	result1 += 48;
	result2 += 48;
	write(1, &result1, 1);
	write(1, "\n", 1);
	write(1, &result2, 1);
	write(1, "\n", 1);
	return (0);

}
