/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmiguelo <mmiguelo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 11:49:38 by mmiguelo          #+#    #+#             */
/*   Updated: 2024/10/30 19:40:37 by mmiguelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Outputs the string 's' to the given file descriptor.
 * 
 * @param s The string to output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/* int	main(void)
{
    int fd = 1; // Standard output (stdout)

    ft_putstr_fd("Hello, World!\n", fd);
    ft_putstr_fd("Testing ft_putstr_fd function.\n", fd);
    ft_putstr_fd("This is another line of text.\n", fd);
    
    return (0);
} */