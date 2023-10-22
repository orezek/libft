/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_memcmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:41:53 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/21 21:53:35 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_memcmp.c ../part1/ft_memcmp.c && ./a.out
int	main(void)
{
	// char	str[] = "ahoj";
	// char	str1[] = "ahoj1";
	int	ar[] = {1, 2, 3, 4, 5};
	int	ar1[] = {1, 2, 3, 4, 5};
	int	result, result1;

	result = ft_memcmp(ar, ar1, 160);
	result1 = memcmp(ar, ar1, 160);
	printf("%d\n", result);
	printf("%d\n", result1);
}

