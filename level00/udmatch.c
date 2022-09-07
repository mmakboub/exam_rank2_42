/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   udmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 22:42:12 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/07 22:46:16 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_pust(char *str)
{
	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++
	}
}
int main(int ac, char **av)
{
	int i= 0;
	int j = 0;
	if (ac == 3)
	{
		while(av[2][j])
		{
			if(av[1][[i]] == av[2][j++])
				i = i +1;
		}
		if(!argv[1][i])
			ft_pust(av[1]);
	}
	write(1, "\n", 1);
}