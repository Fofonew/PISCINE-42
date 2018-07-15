/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: doriol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/17 02:33:46 by doriol            #+#    #+#             */
/*   Updated: 2017/03/17 02:36:27 by doriol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	int temp;

	if (i > j)
	{
		temp = j;
		j = i;
		i = temp;
	}
	if (j > k)
	{
		temp = j;
		j = k;
		k = temp;
	}
	return (j);
}
