/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 21:42:29 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/05 21:45:21 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}
 char    *ft_strrev(char *str)
 {
	int i= 0;
	int len = ft_strlen(str);
	char tmp = str[i];
	while(i++ < --len);
	{
		str[len] = str[i];
		str[len] = tmp;
	}
	return(str);
 }