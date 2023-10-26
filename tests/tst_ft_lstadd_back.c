/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstadd_back.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:59:55 by orezek            #+#    #+#             */
/*   Updated: 2023/10/26 16:09:02 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
// cc tst_ft_lstadd_back.c ../bonus/ft_lstadd_back.c ../bonus/ft_lstadd_front.c ../bonus/ft_lstnew.c ../bonus/ft_lstsize.c ../bonus/ft_lstlast.c&& ./a.out

int	main(void)
{
	t_list	*lst;
	t_list	*new;
	t_list	*old;
	t_list	*newer;
	t_list	*last;
	t_list	*new_last;


	lst = NULL;
	old = ft_lstnew("old");
	new = ft_lstnew("new");
	newer = ft_lstnew("newer");
	new_last = ft_lstnew("newlast");

	ft_lstadd_front(&lst, old);
	ft_lstadd_front(&lst, new);
	ft_lstadd_front(&lst, newer);
	ft_lstadd_back(&lst, new_last);

	printf("%p\n", lst->next->next->next);
	printf("%p\n", new);
	printf("%p\n", newer);
	printf("%p\n", old);
	printf("%p\n", new_last);

	printf("%s\n", (char *) lst->next->next->next->content);
	printf("%d\n", ft_lstsize(lst));
	last = ft_lstlast(lst);
	printf("%p\n", last);
	printf("%s\n", (char *) ft_lstlast(lst)->content);
	return (0);
}
