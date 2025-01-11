/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:21:45 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/04 15:48:17 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	algo;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	algo = 1;
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	int	algo;

	algo = ft_recursive_factorial(7);
	printf("%d \n", algo);
	return(0);
}*/
