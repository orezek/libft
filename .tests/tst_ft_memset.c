/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_memset.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 23:01:47 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/21 22:02:45 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_memset.c ../part1/ft_memset.c && ./a.out
int	main (void)
{
	int		str[5] = {1,2,3,4,5};
	char	*ptr;
	char	*ptr1;

	ptr = memset(str, 'X', sizeof(str));
	ptr1 = ft_memset(str, 'X', sizeof(str));
	write(1, ptr, sizeof(str));
	write(1, "\n", 1);
	write(1, ptr1, sizeof(str));
	write(1, "\n", 1);
}
