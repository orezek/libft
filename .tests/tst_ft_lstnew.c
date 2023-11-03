/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tst_ft_lstnew.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orezek <orezek@student.42prague.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 09:45:07 by orezek            #+#    #+#             */
/*   Updated: 2023/11/03 13:26:22 by orezek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	main(void)
{
	t_list	*ptr;
	char	str[] = "ahoj";
	int		arr[] = {1, 2, 3, 4, 5};
	int		*n;
	int		p;

	ptr = NULL;
	ptr = ft_lstnew(arr);
	n = (*ptr).content;
	//printf("%d\n", *(n + 1));
	p = *(n + 0) += 48;
	write(1, &p, 4);


	return (0);

}
