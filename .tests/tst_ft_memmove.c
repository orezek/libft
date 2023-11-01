/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_memmove.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 10:47:08 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/01 18:48:21 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
// cc -Wall -Wextra -Werror  ./.tests/tst_ft_memmove.c ft_memmove.c && ./a.out

int	main (void)
{
	char	*src;
	char	*mptr;
	char	*dstr;
	//char	*ptr;
	char	*str;

	dstr = NULL;
	//ptr = NULL;

	str = strdup("hello, world!");
	src = str + 9;
	dstr = str + 4;

	//ptr = ft_memmove(dstr, src, 4);
	mptr = memmove(dstr, src, 4);
	//printf("%p\n", ptr);
	printf("%p\n", mptr);
	// printf("%p\n", dstr);

	// //str[14] = '\0';
	printf("%s\n", str);



}
