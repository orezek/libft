/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strtrim.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:42:00 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/29 14:48:54 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	char	str[] = " arrakadabra ";
	char	set[] = " ar";
	char	*sub;

	sub = ft_strtrim(str, set);
	printf("%s\n", sub);
	return (0);
}
