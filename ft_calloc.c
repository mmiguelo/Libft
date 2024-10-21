/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:44:36 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/21 11:12:04 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Allocates continuosly dynamic memory.
 * 
 * @param nmemb Number of elements to allocate.
 * @param size Number of bytes to allocate.
 * @return Returns a pointer to the allocated memory.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if ((nmemb > 2147483647 && size != 0) || (size > 2147483647 && nmemb != 0))
		return (NULL);
	ptr = malloc (nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, nmemb * size);
	return (ptr);
}
