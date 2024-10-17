/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 19:52:06 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/15 19:52:06 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*strlcpy() does a strlen() on the src string so it returns the lenght 
in case of the size of dest be 0.
dest[i] has to end with null*/

int	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	lenght;

	lenght = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (lenght);
	while (src[i] != '\0' && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
}
