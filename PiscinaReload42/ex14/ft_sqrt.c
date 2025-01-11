/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 12:53:18 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/04 17:08:30 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb)
{
	int	r;

	r = 0;
	if (nb > 0)
	{
		while ((r * r) < nb)
			r++;
		if ((r * r) > nb)
			r = 0;
	}
	return (r);
}
/*
int	main(void)
{
	int algo;

	algo = ft_sqrt(5);
	printf("%d \n", algo);
	return (0);
}
*/
