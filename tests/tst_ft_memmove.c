/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_memmove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:47:08 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/22 12:56:10 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_memmove.c ../part1/ft_memmove.c && ./a.out
int	main (void)
{
	char	src[] = "ahoj";
	char	*desptr;
	//char	dstr[] = "xxxx";
	char	*ptr;

	desptr = src;
	desptr += 0;

	ptr = ft_memmove(desptr, src, sizeof(src));
	//ptr = memmove(desptr, src, sizeof(src));
	printf("%s\n", ptr);
	printf("%p\n", desptr);
	printf("%p\n", ptr);

}
