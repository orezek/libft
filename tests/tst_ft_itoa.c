/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_itoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:18:27 by orezek            #+#    #+#             */
/*   Updated: 2023/10/25 08:44:36 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
// cc -Wall -Werror -Wextra  tst_ft_itoa.c ../part2/ft_itoa.c && ./a.out | cat -e
int	main(void)
{
	int		n;
	char	str[10];

	//int		max = 2147483647;
	int		min = -2147483648;
	n = 100000086;
	sprintf(str, "%d", min);
	printf("%s\n", ft_itoa(min));
	printf("%s\n", str);
}
