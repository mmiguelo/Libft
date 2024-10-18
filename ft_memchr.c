/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:51:39 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/18 19:58:59 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the first occurrence of a character in a block of memory.
 * 
 * @param s A pointer to the block of memory.
 * @param c The character to be located.
 * @param n The number of bytes to search within that memory.
 * @return Returns a pointer to the first occurrence of the character c in the 
 * memory block pointed to by s. If the character is not found within the 
 * first n bytes, it returns NULL
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	chr;
	int				i;

	if (!s)
		return (0);
	str = (unsigned char *) s;
	chr = (unsigned char) c;
	i = -1;
	while (++i < n)
	{
		if (str[i] == chr)
			return (&str[i]);
	}
	return (0);
}
