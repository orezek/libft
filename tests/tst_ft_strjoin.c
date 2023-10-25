/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:09:10 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/25 18:16:56 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
// cc -Wall -Wextra -Werror tst_ft_strjoin.c ../part1/ft_strlen.c ../part2/ft_strjoin.c && ./a.out |  cat -e 
int	main(void)
{
	char	str1[] = "a";
	char	str2[] = "";
	char	*ptr;

	ptr = ft_strjoin(str1, str2);
	printf("%s", ptr);
}
