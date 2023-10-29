/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strtrim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:42:00 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/29 14:54:41 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_strtrim.c ../part2/ft_strtrim.c ../part1/ft_strlen.c ../part1/ft_strlcpy.c ../part1/ft_strncmp.c && ./a.out | cat -e
int	main(void)
{
	char	str[] = " arrakadabra ";
	char	set[] = " ar";
	char	*sub;

	sub = ft_strtrim(str, set);
	printf("%s\n", sub);
	return (0);
}
