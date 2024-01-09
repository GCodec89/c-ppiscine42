/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gonolive <gonolive@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:04:17 by gonolive          #+#    #+#             */
/*   Updated: 2024/01/09 16:31:38 by gonolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if ((str[i - 1] < 47) || (i == 0))
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str1[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(str1));
}*/
