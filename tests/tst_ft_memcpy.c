/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_memcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 08:29:11 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/22 09:04:09 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_memcpy.c ../part1/ft_memcpy.c && ./a.out
int	main (void)
{
	// char	str[] = "ahoj";
	int		ar[5] = {1,2,3,4,5};
	// char	cstr[5];
	int		car[5];
	// char	*ptr;
	int		*iptr;

	iptr = ft_memcpy(car, ar, 5 * sizeof(int));
	printf("%d\n", *(iptr + 2));
}
