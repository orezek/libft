/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strlcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 06:57:36 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/23 14:27:27 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_strlcat.c ../part1/ft_strlcat.c ../part1/ft_strlen.c && ./a.out | cat -e
int	main (void)
{
	const char	src[] = "ahoj";
	char		des[] = "xxxx";
	char		*ptr;
	int			result;
	int			result_len;


	result = ft_strlcat(des, src, 16);
	result_len = ft_strlen(des);
	ptr = des;
	printf("%d\n", result);
	//write(1, "\n", 1);
	write(1, ptr, result_len);
	write(1, "\n", 1);

}
