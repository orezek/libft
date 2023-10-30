/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strnstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:43:24 by orezek            #+#    #+#             */
/*   Updated: 2023/10/30 13:42:16 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror  ./.tests/tst_ft_strnstr.c ft_strnstr.c ft_strncmp.c ft_strlen.c && ./a.out
int	main(void)
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	sub[] = "dolor";
	char	*ptr;

	ptr = ft_strnstr(str, sub, 15);
	write(1, ptr, 5);
	return (0);
}
