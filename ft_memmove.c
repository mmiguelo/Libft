/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:45:47 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/18 20:04:22 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copies n bytes from one memory location to another, handling 
 * overlapping regions safely
 * 
 * @param dest A pointer to the destination memory.
 * @param src A pointer to the source memory.
 * @param n The number of bytes to copy.
 * @return Returns a pointer to the destination
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if (!dest || !src)
		return (0);
	if (s < d)
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	else
		ft_memcpy(d, s, n);
	return (d);
}
