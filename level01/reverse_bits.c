/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 22:03:47 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/06 22:08:55 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit;
	while(i > 0)
	{
		bit = bit * 2 + octet % 2;
		octet /= 2;
		i--;
	}
	return(bit);
}