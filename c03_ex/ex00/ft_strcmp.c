/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrodrigo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 13:38:56 by vrodrigo          #+#    #+#             */
/*   Updated: 2019/12/05 16:08:49 by vrodrigo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{		
		if (s1[i] > s2[i])
			return (s2[i] - s1[i]);
		if (s1[i] < s2[i])
			return (s2[i] - s1[i]);
		i++;
	}
	return (0);
}

int main()
{
	char *a;
	char *b;
	char s1[] = "holleeeeee";
	char s2[] = "holle";
	int i;

	a = s1;
	b = s2;
	i = ft_strcmp(a, b);
	printf("%d", i);
}
