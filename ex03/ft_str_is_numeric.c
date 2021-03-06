/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yufujita <yufujita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 20:27:01 by yufujita          #+#    #+#             */
/*   Updated: 2020/01/16 19:38:04 by yufujita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (!('0' <= str[n] && str[n] <= '9'))
		{
			return (0);
		}
		n++;
	}
	return (1);
}
