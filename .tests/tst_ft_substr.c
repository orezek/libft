/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_substr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:54:40 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/31 22:41:07 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -fsanitize=address  -Wall -Wextra -Werror ./.tests/tst_ft_substr.c ft_substr.c ft_strlen.c && ./a.out | cat -e
int	main(void)
{
	char	str[] = "hola";
	char	*strsub;
	strsub = ft_substr(str, 4, 20);
	printf("%s", strsub);
	return (0);
}
