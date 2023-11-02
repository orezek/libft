/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:14:28 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/02 09:54:48 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Werror -Wextra ./.tests/tst_ft_strchr.c ft_strchr.c ft_strlen.c && ./a.out
int	main (void)
{
	//char str[] = "bonjour";
	char str[] = "tripouille";
	//char c = '\0';
	char	*result;
	//char	str3[] = "";

	result = ft_strchr(str, 't' + 256);
	if (result == str)
		write(1, "x", 1);
	else
		write(1, "z", 1);
	write(1, "\n", 1);
	printf("%p\n%p\n", result, str);
	return (0);
}
