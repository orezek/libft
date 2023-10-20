/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strncmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:57:19 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/20 18:21:20 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_strncmp.c ../part1/ft_strncmp.c && ./a.out
int	main (void)
{
	char str[] = "aho";
	char str1[] = "ahojjjj";
	char c = 'o';

	printf("%d\n", strncmp(str, str1, 7));
	printf("%d\n", ft_strncmp(str, str1, 7));
	return (0);
}
