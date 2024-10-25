/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:13:34 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/25 17:33:59 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	if (!lst)
		return (NULL);
	i = 0;
	temp = lst;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}

/* int	main(void)
{
	t_list	*head;

	head = ft_lstnew(NULL);
	ft_lstadd_front(&head, ft_lstnew(NULL));
	ft_lstadd_front(&head, ft_lstnew(NULL));
	printf("%d\n", ft_lstsize(head));
	free(head->next->next);
	free(head->next);
	free(head);
	return (0);
} */