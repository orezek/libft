/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_putstr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 09:45:04 by orezek            #+#    #+#             */
/*   Updated: 2023/11/03 09:18:03 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <fcntl.h>
//cc tst_ft_putstr_fd.c ../part2/ft_putstr_fd.c && ./a.out
int	main(void)
{
	int	fd = open("fsoares.txt", O_RDWR | O_CREAT);

	char	str[] = "\nend!";

	ft_putstr_fd(str, fd);
}
