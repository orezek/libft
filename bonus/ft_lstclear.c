/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:38:48 by orezek            #+#    #+#             */
/*   Updated: 2023/10/29 16:00:38 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*current;

	current = *lst;
	if (*lst != NULL)
	{
		while (current->next != NULL)
		{
			temp = current;
			current = current->next;
			del(temp);
		}
	}
	del(current);
	*lst = NULL;
}
