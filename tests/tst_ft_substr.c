/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_substr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:54:40 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/25 17:54:48 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_substr.c ../part2/ft_substr.c ../part1/ft_strlen.c && ./a.out | cat -e
int	main(void)
{
	char	str[] = "ahoj";
	char	*ptr;

	ptr = ft_substr(str, 0, 4);
	printf("%s", ptr);
	return (0);
}
