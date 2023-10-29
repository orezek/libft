/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_memchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:48:00 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/21 21:13:59 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_memchr.c ../part1/ft_memchr.c && ./a.out | cat -e
int	main (void)
{
	char	str[] = "ahoj";
	int		ar[5] = {1, 100, 200, 600, 10000};
	char	*ptr;
	int		*ptr1;

	ptr = ft_memchr(str, 'j', 16);
	write(1, ptr, 1);
	write(1, "\n", 1);
	ptr1 = ft_memchr(ar, 600, 16);
	printf("%p\n", ptr1);
	printf("%d\n", *(ptr1 + 0));
	return (0);
}
