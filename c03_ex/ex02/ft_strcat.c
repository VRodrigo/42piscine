/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrodrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:10:00 by vrodrigo          #+#    #+#             */
/*   Updated: 2019/12/05 16:07:52 by vrodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int pos;

	pos = ft_strlen(dest);
	while(*src != '\0')
	{
		dest[pos] = *src;
		pos++;
		src++;
	}
	dest[pos] = '\0';
	return (dest);
}

int	main()
{
	char dest[12] = "hola";
	char src[] = "adios";

	printf("%s", ft_strcat(&dest[0], &src[0]));
}
