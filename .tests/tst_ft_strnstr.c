/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strnstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:43:24 by orezek            #+#    #+#             */
/*   Updated: 2023/11/02 10:43:34 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror  ./.tests/tst_ft_strnstr.c ft_strnstr.c ft_strncmp.c ft_strlen.c && ./a.out
int	main(void)
{
	char	str[] = "aaabcabcd";
	char	sub[] = "aabc";
	char	*ptr;

	ptr = ft_strnstr(str, sub, -1);
	write(1, ptr, 5);
	return (0);
}
