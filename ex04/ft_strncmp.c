/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/08 09:04:04 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/09 07:11:49 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int		index;

	index = 0;

	while (s1[index] && s2[index] == (s1[index] == s2[index]) && index < n)
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
