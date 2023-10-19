/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:29:49 by orezek            #+#    #+#             */
/*   Updated: 2023/10/19 15:36:41 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
