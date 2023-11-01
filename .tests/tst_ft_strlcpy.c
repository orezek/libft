/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strlcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:09:17 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/01 23:45:59 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -fsanitize=address  -Wall -Wextra -Werror ./.tests/tst_ft_strlcpy.c ft_strlcpy.c ft_strlen.c && ./a.out | cat -e

size_t	m_ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	char	*source;

	source = (char *) src;
	i = 0;
	while (source[i] && ((i + 1) < size))
	{
		dest[i] = source[i];
		i++;
	}
	if (size)
		dest[i] = 0;
	return (ft_strlen(src));
}
int	main (void)
{
	char dest[10]; memset(dest, 'A', 10);
	char	src[] = "coucou";
	//char	des[] = "x";
	int		result;
	//int		result1;

	result = ft_strlcpy(dest, src, -1);
	//result1 = m_ft_strlcpy(des, src, -1);
	printf("%d\n", result);
	//printf("%d\n", result1);
	printf("%s\n", dest);
	return (0);
}
