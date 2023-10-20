/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:14:28 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/20 12:04:43 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_strchr.c ../part1/ft_strchr.c ../part1/ft_strlen.c && ./a.out
int	main (void)
{
	char str[] = "ahoj";
	char c = 'o';

	write(1, ft_strchr(str, c), 2);
	return (0);
}
