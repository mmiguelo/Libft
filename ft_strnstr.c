/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:31:49 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/22 19:04:03 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Locates a substring within a string.
 * 
 * @param big The string to be searched.
 * @param little The substring to find within big.
 * @param len The number of characters to search within big
 * @return A pointer to the begining of the substring, if found 
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len && little[j])
			j++;
		if (little[j] == '\0')
			return ((char *)big + i);
		i++;
	}
	return (NULL);
}
/* #include <strings.h>
#include <string.h>

int	main()
{
	char *s1 = "A";
 	size_t max = strlen(s1) + 1;
 	//char *i1 = strnstr(s1, s1, max);
 	char *i2 = ft_strnstr(s1, s1, max);
	//printf("%s\n", i1);
	printf("%s\n", i2);
	return (0);
} */
