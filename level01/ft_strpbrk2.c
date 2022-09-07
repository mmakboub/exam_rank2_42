/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakboub <mmakboub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:00:10 by mmakboub          #+#    #+#             */
/*   Updated: 2022/09/07 18:03:45 by mmakboub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	while (!s1 || !s2)
		return(NULL);
	while(*s1)
	{
		i = 0;
		while(s2[i])
		{
			if (s1[i] == s2[i])
				return((char)*s1);
			i++;
		}
		s1++;
	}
	return(NULL);
}