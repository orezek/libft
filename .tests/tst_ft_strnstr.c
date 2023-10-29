/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strnstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:43:24 by orezek            #+#    #+#             */
/*   Updated: 2023/10/23 13:40:01 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror  tst_ft_strnstr.c ../part1/ft_strnstr.c ../part1/ft_strncmp.c ../part1/ft_strlen.c && ./a.out
int	main(void)
{
	char	str[] = "ahoj";
	char	sub[] = "oj";
	char	*ptr;

	ptr = ft_strnstr(str, sub, 1);
	write(1, ptr, 4);
	return (0);
}
