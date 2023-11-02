/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strrchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:14:43 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/02 10:20:06 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Werror -Wextra cc -Wall -Werror -Wextra ./.tests/tst_ft_strrchr.c ft_strrchr.c ft_strlen.c && ./a.out
int	main (void)
{
	char str[] = "tripouille";
	char c = 't';
	char	*result;
	//write(1, ft_strrchr(str, c), sizeof(ft_strrchr(str, c + 256)));
	result = ft_strrchr(str, c + 256);
	printf("%s", result);
	return (0);
}
