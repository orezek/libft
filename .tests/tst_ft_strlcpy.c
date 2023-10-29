/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strlcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:09:17 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/22 17:51:10 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_strlcpy.c ../part1/ft_strlcpy.c ../part1/ft_strlen.c && ./a.out
int	main (void)
{
	char	src[] = "ahoj";
	char	des[] = "x";
	int		result;

	result = ft_strlcpy(des, src, 5);
	printf("%d\n", result);
	printf("%s\n", des);
	return (0);
}
