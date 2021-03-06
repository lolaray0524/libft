/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/05 13:46:14 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/05 13:48:46 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(char *s, char c)
{
	int		count;

	count = 0;
	while (*s == c)
		s++;
	while (*s != c && *s++)
		count++;
	return (count);
}
