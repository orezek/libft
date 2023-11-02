/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:06:58 by orezek            #+#    #+#             */
/*   Updated: 2023/11/02 12:01:47 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_isalpha.c ../part1/ft_isalpha.c && ./a.out
int	main (void)
{
	int		i;
	i =		-1;
	while (i < 530)
	{
		if (!!ft_isalpha(i) != !!isalpha(i))
			printf("%d\n", i);
		i++;
	}
	// while (i < 530)
	// {
	// 	if (isalpha(i))
	// 		printf("%d\n", i);
	// 	i++;
	// }
	return (0);
}
