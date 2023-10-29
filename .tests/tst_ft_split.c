/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:02:22 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/29 15:26:00 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_split.c ../part2/ft_split.c && ./a.out
int	main (void)
{
	char	str[] = "ab rak ada bra";
	char	sep;
	char	**result;
	char	*ptr;

	sep = ' ';
	result = ft_split(str, sep);
	while(*result)
		printf("%s\n", *result++);
	return (0);
}
