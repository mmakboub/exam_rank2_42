/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 00:00:07 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/04 00:07:45 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
	 	i++;
	return(i);
}

int main(int ac, char **av)
{
	if ( ac ==2)
	{
		int i = ft_strlen(&av[1][i]);
		while(i)
		{
			write(1, &av[1][--i], 1);
		}
	}
	write(1, "\n", 1);
	return(0);
}