/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_isalpha.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:06:58 by orezek            #+#    #+#             */
/*   Updated: 2023/10/19 12:43:46 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../libft.h"
#include <ctype.h>

int	main (void)
{
	char c = 'A';
	unsigned char cc =  65;
	int result1 = 0;
	int result2 = 0;
	result1 = ft_isalpha(c);
	result2 = isalpha(cc);
	result1 += 48;
	result2 += 48;
	write(1, &result1, 1);
	write(1, "\n", 1);
	write(1, &result2, 1);
	write(1, "\n", 1);
	return (0);
}
