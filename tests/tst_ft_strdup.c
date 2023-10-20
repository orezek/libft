/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 21:58:14 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/20 22:13:27 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_strdup.c ../part1/ft_strdup.c ../part1/ft_strlen.c && ./a.out
int	main (void)
{
	char str[] = "ahoj";
	char *ptr;
	char *ptr1;

	ptr = strdup(str);
	ptr1 = ft_strdup(str);
	write(1, ptr, sizeof(str));
	write(1, "\n", 1);
	write(1, ptr1, sizeof(str));
	write(1, "\n", 1);
}
