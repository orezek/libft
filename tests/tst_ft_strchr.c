/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:14:28 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/23 14:26:06 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Werror -Wextra tst_ft_strchr.c ../part1/ft_strchr.c ../part1/ft_strlen.c && ./a.out
int	main (void)
{
	char str[] = "ahoj";
	char c = 'o';

	write(1, ft_strchr(str, c), 2);
	return (0);
}
