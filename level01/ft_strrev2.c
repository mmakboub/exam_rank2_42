/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:04:02 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/07 18:10:19 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int 	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

char    *ft_strrev(char *str)
{
	int len = ft_strlen(str);
	int i = 0;
	char tmp;
	while(len > i)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return(str);
}