/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:54:29 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/22 18:26:55 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates the last occurence of a character in a string.
 * 
 * @param str A pointer to the string to be searched.
 * @param c The character to find
 * @return Returns a pointer to the last occurance of that char
 */
char	*ft_strrchr(const char *str, int c)
{
	int	i;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	while ((str[i] != (char)c) && i >= 0)
		i--;
	if (str[i] == (char)c)
		return ((char *)str + i);
	return (NULL);
}
