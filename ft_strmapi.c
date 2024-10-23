/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:47:37 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/23 15:19:07 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies the function f to each character of the string s.
 * 
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 * @return The string created from the successive applications
of ’f’.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int				i;
	char						*str;
	unsigned int				length;

	length = ft_strlen(s);
	if (!s || !f)
		return (NULL);
	str = ft_calloc(length + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < length)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
