/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:51:39 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/18 15:53:48 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
