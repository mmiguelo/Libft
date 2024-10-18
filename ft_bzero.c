/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 10:45:58 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/18 18:55:09 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			i;
	
	if (s == NULL || n == 0)
		return;
	str = (unsigned char*) s;
	i = 0;
	while(n--)
	{
		str[i] = '\0';
		i++;
	}
}
