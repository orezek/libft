/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strncmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:57:19 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/02 10:36:36 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_strncmp.c ../part1/ft_strncmp.c && ./a.out
int	main (void)
{
	char str[] = "1234";
	char str1[] = "12345";

	//printf("%d\n", strncmp(str, str1, -1));
	printf("%d\n", ft_strncmp(str, str1, -1));
	return (0);
}
