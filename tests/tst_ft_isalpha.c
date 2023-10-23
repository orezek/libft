/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:06:58 by orezek            #+#    #+#             */
/*   Updated: 2023/10/23 14:18:59 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_isalpha.c ../part1/ft_isalpha.c && ./a.out
int	main (void)
{
	char c = 'a';
	int result1 = 0;
	int result2 = 0;
	result1 = ft_isalpha(c);
	result2 = isalpha(c);
	result1 += 48;
	//result2 += 48;
	// write(1, &result1, 1);
	// write(1, "\n", 1);
	// write(1, &result2, 1);
	printf("%d", result2);
	// write(1, "\n", 1);
	return (0);
}
