/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:00:22 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/05 21:08:00 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int i = 0;
	int res;
	int signe = 1;
	while(str[i])
	{
		while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 32))
			i++;
		if(str[i] == '-')
			signe = -1;
		while(str[i] == '+' || str[i] == "-")
			i++;
		while(str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + str[i] - 48;
			i++;
		}
		i++;
	}
	
}