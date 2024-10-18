/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:51:43 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/18 20:02:28 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n number of bytes from oe memory location to another
 * 
 * @param dest A pointer to the destination memory.
 * @param src A pointer to the source memory.
 * @param n The number of bytes to copy.
 * @return Returns a pointer to the destination
 */
void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest || !src)
		return (0);
	i = 0;
	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	while (i++ < n)
		d[i] = s[i];
	d[i] = '\0';
	return (d);
}
