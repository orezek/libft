/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:39:37 by orezek            #+#    #+#             */
/*   Updated: 2023/10/26 16:04:51 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_lstsize(t_list *lst)
{
	int	counter;

	if (lst == NULL)
		return (-1);
	counter = 1;
	while (lst->next != NULL)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
