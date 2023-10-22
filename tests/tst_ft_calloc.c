/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_calloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 08:47:08 by aldokezer         #+#    #+#             */
/*   Updated: 2023/10/21 09:14:15 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main (void)
{
	char	*ptr;
	char	*ptr1;
	ptr = calloc(5, sizeof(char));
	ptr1 = ft_calloc(5, sizeof(char));
	//write(1, ptr, 5);
	//write(1, "\n", 1);
	write(1, ptr1, 5);
	//write(1, "\n", 1);
}
