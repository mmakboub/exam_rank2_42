/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 21:05:06 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/07 21:46:43 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void	last_word(char *str)
{
	int i = 0;
	int j = 0;
	while(str[i])
	{
		if(str[i] == ' ' || (str[i] >=33 && str[i] <= 126))
			j = i + 1;
		i++;
	}
	while(str[j] >= 33 && str[j] <= 127)
	{
		write(1, &str[j], 1);
		j++;
	}
	
}

int main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write(1, "\n", 1);
	return(0);
}