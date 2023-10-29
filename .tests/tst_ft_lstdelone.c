/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstdelone.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:49:55 by orezek            #+#    #+#             */
/*   Updated: 2023/10/27 14:47:57 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_lstdelone.c ../bonus/ft_lstnew.c ../bonus/ft_lstadd_front.c ../bonus/ft_lstdelone.c ../part1/ft_strdup.c ../part1/ft_strlen.c&& ./a.out
void	del(void *content)
{
	free(content);
}

int	main(void)
{
	t_list	*lst;
	t_list	*old;
	t_list	*new;
	t_list	*newer;
	t_list	*to_del;
	void (*f) (void *);
	char *c1;
	c1 = ft_strdup("old");
	char c2[] = "new";
	char c3[] = "newer";

	f = del;
	lst = NULL;
	old = ft_lstnew(c1);
	new = ft_lstnew(c2);
	newer = ft_lstnew(c3);
	to_del = old;
	ft_lstadd_front(&lst, old);
	ft_lstadd_front(&lst, new);
	ft_lstadd_front(&lst, newer);
	//printf("%p\n", lst->next->next);
	printf("%p\n", to_del->content);
	printf("%p\n", c1);
	write(1, to_del->content, 3);
	write(1, "\n", 1);
	ft_lstdelone(to_del, f);
	write(1, to_del->content, 3);
	write(1, "\n", 1);


}
