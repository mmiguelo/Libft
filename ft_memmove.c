/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:45:47 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/17 11:48:57 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	size_t			j;
	unsigned char	*s;
	unsigned char	*d;

	i = 0;
	j = ft_strlen(src);
	s = (unsigned char *) src;
	d = (unsigned char *) dest;
	if(!dest || !src)
		return (0);
	if (s < d)
	{
		while(n-- > 0)
			d[n] = s[n];
	}
	while (i < n)
	{
		s[j] = d[i];
		i++;
		j--;
	}
	return (d);
}
