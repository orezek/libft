/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstclear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldokezer <aldokezer@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 18:14:38 by aldokezer         #+#    #+#             */
/*   Updated: 2023/11/02 22:29:38 by aldokezer        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
//cc tst_ft_lstclea.c  ../bonus/ft_lstadd_front.c ../part1/ft_strdup.c ../bonus/ft_lstnew.c ../part1/ft_strlen.c ../bonus/ft_lstclear.c ../bonus/ft_lstlast.c&& ./a.out

void del (void *node)
{
	free(node);
}

void free_str_ptr(void *str)
{
	free(*((void **)str));
}
int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*head;

	char	*check;
	char	*str1;
	char	*str2;
	char	*str3;

	str1 = ft_strdup("first");
	str2 = ft_strdup("second");
	str3 = ft_strdup("third");

	node1 = ft_lstnew(str1);
	node2 = ft_lstnew(str2);
	node3 = ft_lstnew(str3);

	head = NULL;
	ft_lstadd_back(&head, node1);
	ft_lstadd_back(&head, node2);
	ft_lstadd_back(&head, node3);
	// write(1, head->next->next->content, sizeof(head->content));
	// write(1, "\n", 1);
	// write(1, node1->content, sizeof(node1->content));
	// write(1, "\n", 1);
	//printf("%p", head);
	check = head->next->content;
	//printf("%s\n", *check);
	while(head != NULL)
	{
		// write(1, head->content, sizeof(head->content));
		// write(1, "\n", 1);
		printf("%p\n", head);
		head = head->next;
	}
	ft_lstclear(&head, free_str_ptr);
	printf("%p\n", check);
	printf("%p", head);
}
