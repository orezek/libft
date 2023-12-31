/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_bzero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:22:37 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/23 14:00:56 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_bzero.c ../part1/ft_bzero.c && ./a.out | cat -e
int	main(void)
{
	char str[] = "ahoj, ty vole jak se mas?";
	write(1, str, sizeof(str));
	write(1, "\n", 1);
	ft_bzero(str, sizeof(str));
	write(1, str, sizeof(str));
}
