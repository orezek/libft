/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_memmove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:47:08 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/02 16:05:55 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
// cc -Wall -Wextra -Werror  ./.tests/tst_ft_memmove.c ft_memmove.c && ./a.out

int	main (void)
{
	// //char	*src;
	// char	*mptr;
	// //char	*dstr;
	// //char	*ptr;
	// char	*str;

	// //dstr = NULL;
	// //ptr = NULL;

	// str = strdup("hello, world!");
	// //src = str + 9;
	// //dstr = str + 4;
	// char	b[0xF0];

	// mptr = ft_memmove(b, NULL, 5);
	// //mptr = memmove(b, NULL, 5);
	// //printf("%p\n", ptr);
	// printf("%p\n", &mptr);
	// // printf("%p\n", dstr);

	// // //str[14] = '\0';
	// printf("%s\n", str);
	int		size = 10;
	char	*dst = electric_alloc(size);
	char	*data = electric_alloc(size);

	memset(data, 'A', size);

	mprotect(dst - 4096 + size, 4096, 2);
	mprotect(data - 4096 + size, 4096, 1);

	ft_memmove(dst, data, size);


// second test

	dst = electric_alloc_rev(size);
	data = electric_alloc_rev(size);

	memset(data, 'A', size);

	mprotect(dst - size, 4096, 2);
	mprotect(data - size, 4096, 1);

	ft_memmove(dst, data, size);


}
