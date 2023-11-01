/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 15:02:22 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/01 16:16:12 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -fsanitize=address ./.tests/tst_ft_strmapi.c ft_strmapi.c ft_strlen.c&& ./a.out | cat -e
int	main (void)
{
	char	str[] = "";
	char	sep;
	char	**result;
	char	*ptr;

	sep = 'a';
	result = ft_split(str, sep);
	while(*result)
		printf("%s\n", *result++);
	// if (result != NULL)
	// {
	// 	while(*result)
	// 	printf("%s\n", *result++);
	// }
	// else
	// {
	// 	printf("%s", "NULL returned");
	// 	return (0);
	// }
}
