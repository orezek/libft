/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strlen.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 08:47:24 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/23 14:29:03 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_strlen.c ../part1/ft_strlen.c && ./a.out
int main (void)
{
	int len;
	len = ft_strlen("ahoj");
	len += 48;
	write(1, &len, 4);
	return (0);
}

