/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_atoi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:15:41 by orezek            #+#    #+#             */
/*   Updated: 2023/10/25 08:51:12 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_atoi.c ../part1/ft_atoi.c ../part1/ft_isdigit.c && ./a.out
int	main (void)

{
	char	str[] = "100";
	int		result;
	int		result1;

	result = ft_atoi(str);
	result1 = atoi(str);
	printf("%d\n", result);
	printf("%d\n", result1);
}
