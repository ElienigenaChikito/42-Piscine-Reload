/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 15:23:19 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/04 16:03:00 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
		a++;
	return (s1[a] - s2[a]);
}
/*
 * int	main(void)
{
	char *s1 = "aa";
	char *s2 = "aah";
	ft_strcmp(s1, s2);
	printf("%d", ft_strcmp(s1, s2));
	return(0);
}
*/
