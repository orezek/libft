/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strmapi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:37:50 by orezek            #+#    #+#             */
/*   Updated: 2023/10/25 12:13:36 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc -Wall -Wextra -Werror tst_ft_strmapi.c ../part2/ft_strmapi.c ../part1/ft_strlen.c && ./a.out
char	ft_cap(unsigned int n, char c)
{
	return (c - n);
}

int	main(void)
{
	char	str[] = "aiqm";
	char	(*f)(unsigned int, char);

	f = ft_cap;
	// ft_strmapi(str, f);
	printf("%s", ft_strmapi(str, f));
	return (0);
}



