/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:14:43 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/20 12:18:16 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_strrchr.c ../part1/ft_strrchr.c ../part1/ft_strlen.c && ./a.out
int	main (void)
{
	char str[] = "aosfsf";
	char c = 'o';
	write(1, ft_strrchr(str, c), sizeof(ft_strrchr(str, c)));
	return (0);
}
