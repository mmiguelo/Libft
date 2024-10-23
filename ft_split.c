/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:46:27 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/23 16:13:29 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
			words++;
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	return (words);
}

static int	ft_count_letters(char const *s, char c)
{
	int	i;
	int	letters;

	i = 0;
	letters = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		letters++;
		i++;
	}
	letters++;
	return (letters);
}

static char	*ft_copy_words(char const *s, int a)
{
	char	*str;

	str = ft_calloc(a, sizeof(char));
	ft_strlcpy(str, (char *)s, a);
	return (str);
}

/**
 * @brief Returns an array of strings obtained by splitting ’s’ using the
 * character ’c’ as a delimiter.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split or NULL if the
 * allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	char	**array;
	int		line;
	int		column;
	int		i;

	if (!s)
		return (NULL);
	column = ft_count_words(s, c);
	array = ft_calloc(column + 1, sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	while (column)
	{
		while (*s && *s == c)
			s++;
		line = ft_count_letters(s, c);
		array[i] = ft_copy_words((char const *) s, line);
		if (!array[i++])
			return (NULL);
		column--;
		while (*s && *s != c)
			s++;
	}
	return (array);
}

/* int	main()
{
	char **str = NULL;
	int	i = 0;

	//printf("%s\n", ft_split(str, ' '));
	//split(str, ' ');
	
	if (!(str = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ')))
        printf("NULL");
    else
    {
        while (str[i] != NULL)
        {
            printf("%s", str[i]);
            write(1, "\n", 1);
            i++;
        }
    }
	char ** tab;
	
	char * splitme = strdup("Tripouille");
	tab = ft_split(splitme, ' ');
	
}*/