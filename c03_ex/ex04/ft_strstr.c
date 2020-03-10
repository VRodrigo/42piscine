/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrodrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 11:53:32 by vrodrigo          #+#    #+#             */
/*   Updated: 2019/12/05 16:10:39 by vrodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strstr_compare(char *str, char *to_find)
{
	while (*to_find != '\0')
	{
		if (*str != *to_find)
		{
			return (1);
		}
		to_find++;
		str++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		match;
	char	*res;

	res = 0;
	while (*str != '\0')
	{
		match = 1;
		if (*str == *to_find)
		{
			match = ft_strstr_compare(str, to_find);
		}
		if (match == 0)
			return (str);
		str++;
	}
	return (res);
}

int		main(void)
{
	char str[] = "hola adios pepe paco rima";
	char to_find[] = "paco";
	char res[45];
	char *a;

	a = res;
	a = ft_strstr(&str[0], &to_find[0]);
	printf("%s", a);
}
