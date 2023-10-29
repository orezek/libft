/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_putstr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:45:04 by orezek            #+#    #+#             */
/*   Updated: 2023/10/24 09:51:25 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_putstr_fd.c ../part2/ft_putstr_fd.c && ./a.out
int	main(void)
{
	char	str[] = "ahoj";

	ft_putstr_fd(str, 1);
}
