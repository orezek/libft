/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_memcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 08:29:11 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/03 13:30:59 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_memcpy.c ../part1/ft_memcpy.c && ./a.out
int	main(void)
{
	char	*ptr1;
	char	*ptr2;
	char	*iptr;

	ptr1 = NULL;
	ptr2 = NULL;

	iptr = ft_memcpy(ptr1, ptr2, 10);
	//iptr = memcpy(NULL, NULL, 0);
	printf("%p\n", iptr);
}
