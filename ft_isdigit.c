/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:29:49 by orezek            #+#    #+#             */
/*   Updated: 2023/10/29 16:52:38 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	digit;

	if (c == EOF)
		return (0);
	digit = (unsigned char) c;
	if (digit >= '0' && digit <= '9' )
		return (1);
	return (0);
}
