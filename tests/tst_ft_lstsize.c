/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:54:24 by orezek            #+#    #+#             */
/*   Updated: 2023/10/26 13:54:51 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_lstsize.c ../bonus/ft_lstadd_front.c ../bonus/ft_lstnew.c ../bonus/ft_lstsize.c && ./a.out
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
	printf("%d", ft_lstsize(lst));
	return (0);
}
