/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_putchar_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:26:44 by orezek            #+#    #+#             */
/*   Updated: 2023/10/24 09:48:49 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_putchar_fd.c ../part2/ft_putchar_fd.c && ./a.out
int	main (void)
{
	char	buff[] = "a";

	ft_putchar_fd(buff[0], 1);
	return (0);
}
