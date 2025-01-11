/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoteros- <eoteros-@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 18:21:45 by eoteros-          #+#    #+#             */
/*   Updated: 2025/01/10 11:57:02 by eoteros-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (nb > 0)
		{
			res *= nb;
			nb -= 1;
		}
		return (res);
	}
	else
		return (0);
}
