/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:52:20 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/15 19:52:20 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief concatenates strings while ensuring that the destination buffer 
 * is not overflowed.
 * 
 * @param dst A pointer to the destination string
 * @param src A pointer to the source string
 * @param size Size of destination buffer, including the space for '\0'
 * @return Returns the total lenght of the string that was created.
 */
size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	lenght_src;
	size_t	lenght_dst;

	if (!dst || !src)
		return (0);
	lenght_src = ft_strlen(src);
	lenght_dst = ft_strlen(dst);
	if (size == 0 || lenght_dst > size)
		return (lenght_src + size);
	while ((src[i] != '\0') && ((i + lenght_dst) < size - 1))
	{
		dst[i + lenght_dst] = src[i];
		i++;
	}
	dst[i + lenght_dst] = '\0';
	return (lenght_dst + lenght_src);
}
