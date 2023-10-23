/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_calloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 08:47:08 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/23 14:05:15 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_calloc.c ../part1/ft_memset.c ../part1/ft_calloc.c && ./a.out | cat -e
int	main (void)
{
	char	*ptr;
	char	*ptr1;
	ptr = calloc(5, sizeof(char));
	ptr1 = ft_calloc(5, sizeof(char));
	//write(1, ptr, 5);
	//write(1, "\n", 1);
	write(1, ptr1, 5);
	//write(1, "\n", 1);
}
