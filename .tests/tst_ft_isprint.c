/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isprint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:37:54 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/02 14:19:54 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror ./.tests/tst_ft_isprint.c ft_isprint.c ft_isalpha.c && ./a.out
int	main (void)
{
	int		i;
	i =		-1;
	while (i < 530)
	{
		if (!!ft_isprint(i) != !!isprint(i))
			printf("%d\n", i);
		i++;
	}
	return (0);
}
