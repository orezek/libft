/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isdigit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 15:31:54 by orezek            #+#    #+#             */
/*   Updated: 2023/10/19 19:04:00 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main (void)
{
	char c = 'A';
	int result1 = 0;
	int result2 = 0;
	result1 = ft_isdigit(c);
	result2 = isdigit(c);
	result1 += 48;
	result2 += 48;
	write(1, &result1, 1);
	write(1, "\n", 1);
	write(1, &result2, 1);
	//printf("%d", result2);
	write(1, "\n", 1);
	return (0);
}
