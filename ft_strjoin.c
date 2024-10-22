/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:45:13 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/22 12:00:58 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Joins two strings into one
 * 
 * @param s1 The prefix string
 * @param s2 The suffix string
 * @return Returns a pointer to the new string.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		s1_length;
	int		s2_length;	

	s1_length = ft_strlen(s1);
	s2_length = ft_strlen(s2);
	new = ft_calloc((s1_length + s2_length +1), sizeof(char));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, s1_length + 1);
	ft_strlcpy((new + s1_length), s2, s2_length + 1);
	return (new);
}
