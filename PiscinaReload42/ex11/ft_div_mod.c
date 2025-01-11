/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 17:49:25 by eoteros-          #+#    #+#             */
/*   Updated: 2024/12/19 18:09:00 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a = 20;
	int	b = 5;
	int	div = 0;
	int	mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("Este es el div: %d \n", div);
	printf("Este es el mod: %d \n", mod);
	return (0);
}
*/
