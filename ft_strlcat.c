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

/*strlcat() does a strlen() on the src string so it returns the lenght in case 
of the size of dest be 0, also does a strlen() on the dest so it can append 
the Nul-terminated strinc src to the end of dst.
dest[i] has to end with null*/

/*is ft_strlen() a static function??*/

int	ft_strlcat(char *dst, char *src, size_t size)
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
