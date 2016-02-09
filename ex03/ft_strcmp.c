/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 07:58:00 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/09 07:05:46 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2);

int		ft_strcmp(char *s1, char *s2)
{
	int		index;
    
   	index = 0;

	while (s1[index] && s2[index] == (s1[index] == s2[index]))
    {
		index++;
	}
	
	if (s1[index] > s2[index])
	{
		return (1);
	}
	else if (s1[index] < s2[index])
	{
		return (-1);
	}
	else
	{
		return (0);
	}

    }
