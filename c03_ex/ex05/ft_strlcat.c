/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrodrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 15:10:00 by vrodrigo          #+#    #+#             */
/*   Updated: 2019/12/05 16:11:05 by vrodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
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

int	ft_strlcat(char *dest, char *src, int size)
{
	int pos;
	int i;
	int len_dst;
	int len_src;

	i = 0;
	len_dst = ft_strlen(dest);
	len_src = ft_strlen(src);
	pos = len_dst;
	while(*src != '\0' && i < size - len_dst - 1)
	{
		dest[pos] = *src;
		pos++;
		src++;
		i++;
	}
	if (size > 0 || len_dst > size)
		dest[pos] = '\0';
	return (len_dst + len_src);
}

int	main()
{
	char dest[12] = "hola";
	char src[] = "adios";

	printf("%d", ft_strlcat(&dest[0], &src[0], 13));
	printf("%s", dest);
}
