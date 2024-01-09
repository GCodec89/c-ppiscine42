/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:38:39 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/09 12:46:13 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_lowercase(char *str)
{
	while (*str != '\0')
	{
		if (*str > 122 || *str < 97)
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char	*str1;

	str1 = "tikitaka";
	printf("%d\n", ft_str_is_lowercase(str1));
}*/
