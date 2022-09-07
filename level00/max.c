/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:47:39 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/07 22:02:56 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		max(int* tab, unsigned int len)
{
	int i = 0;
	char str;
	str = tab [i];
	while(i < len )
	{
		if(str < tab[i])
			str = tab[i];
		i++;
	}
	return(str);
}