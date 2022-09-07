/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 19:09:03 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/07 19:55:17 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int check_double(char *str, char c, int i)
{
	int j = 0;
	while(j < i)
	{
		if(str[j] == c)
			return(0);
		j++;
	}
	return(1);
}

int main(int ac, char **av)
{
	int i =0;
	int j = 0;
	if(ac == 3)
	{
		while(av[1][i] != '\0')
		{
			j = 0;
			while(av[2][j] != '\0')
			{
				if(av[1][i] == av[2][j])
				{
					if(check_double(av[1], av[1][i], i))
					{
						write(1, &av[1][i], 1);
						break;
					}
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}