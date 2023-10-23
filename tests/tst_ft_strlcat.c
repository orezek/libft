/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_strlcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 06:57:36 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/23 07:57:51 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main (void)
{
	const char	src[] = "ahoj";
	char		des[] = "xxxx";
	char		*ptr;
	int			result;


	result = ft_strlcat(des, src, 16);
	ptr = des;
	//printf("%d\n", result);
	//write(1, "\n", 1);
	write(1, ptr, sizeof(des));
	write(1, "\n", 1);

}
