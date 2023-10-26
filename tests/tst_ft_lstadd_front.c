/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstadd_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:27:56 by orezek            #+#    #+#             */
/*   Updated: 2023/10/26 12:47:03 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*old;
	t_list	*newer;


	old = ft_lstnew("old");
	new = ft_lstnew("new");
	newer = ft_lstnew("newer");

	// initial lst entry;
	//lst = old;
	ft_lstadd_front(&lst, old);
	ft_lstadd_front(&lst, new);
	ft_lstadd_front(&lst, newer);

	printf("%p\n", lst->next->next);
	printf("%p\n", newer);
	printf("%p\n", new);
	printf("%p\n", old);

	printf("%s\n", (char *) lst->next->next->content);
	return (0);
}

