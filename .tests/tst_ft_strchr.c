/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:14:28 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/31 14:54:44 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Werror -Wextra tst_ft_strchr.c ../part1/ft_strchr.c ../part1/ft_strlen.c && ./a.out
int	main (void)
{
	//char str[] = "bonjour";
	char c = '\0';
	char	*result;
	char	str3[] = "";

	result = ft_strchr(str3, c);
	if (result == str3)
		write(1, "x", 1);
	else
		write(1, "z", 1);
	write(1, "\n", 1);
	printf("%p\n%p\n", result, str3);
	return (0);
}
