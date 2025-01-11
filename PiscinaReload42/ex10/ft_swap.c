/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:46:03 by eoteros-          #+#    #+#             */
/*   Updated: 2024/12/19 17:45:29 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
int	main()
{
	int	a = 5;
	int	b = 7;
	printf("%d %d \n", a, b);
	ft_swap(&a, &b);
	printf("%d %d \n", a, b);
	return (0);
}
*/
