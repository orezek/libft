/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_bzero.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 19:22:37 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/21 19:34:08 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_bzero.c ../part1/ft_bzero.c && ./a.out | cat -e
int	main(void)
{
	char str[] = "ahoj, ty vole jak se mas?";
	write(1, str, sizeof(str));
	write(1, "\n", 1);
	ft_bzero(str, sizeof(str));
	write(1, str, sizeof(str));
}
