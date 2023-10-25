/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_striteri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:18:10 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/25 16:32:25 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_striteri.c ../part2/ft_striteri.c ../part1/ft_strlen.c&& ./a.out
void ft_f(unsigned int n, char* c)
{
	*c -= n;
}

int	main (void)
{
	char	str[] = "aiqm";
	void (*f) (unsigned int, char*);
	f = ft_f;
	ft_striteri(str, f);
	printf("%s", str);
	return (0);
}
