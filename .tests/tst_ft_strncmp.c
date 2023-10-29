/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strncmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:57:19 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/23 14:29:36 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_strncmp.c ../part1/ft_strncmp.c && ./a.out
int	main (void)
{
	char str[] = "aho";
	char str1[] = "ahojjjj";

	printf("%d\n", strncmp(str, str1, 7));
	printf("%d\n", ft_strncmp(str, str1, 7));
	return (0);
}