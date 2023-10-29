/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strlcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 06:57:36 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/29 20:55:53 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_strlcat.c ../part1/ft_strlcat.c ../part1/ft_strlen.c && ./a.out | cat -e

int	main (void)
{
	char	str[10] = "a";
	char	src[] = "lorem ipsum dolor sit amet";
	int		result;

	result = ft_strlcat(str, src, 0);
	printf("%d\n", result);
	printf("%s\n", str);
	return (0);

}
