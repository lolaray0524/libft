/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_startword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 10:43:50 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/02 10:46:24 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_startword(char const *s, size_t ind, char c)
{
	if (ind == 0 && s[ind] != c)
		return (1);
	if (s[ind] != c && s[ind - 1] == c)
		return (1);
	return (0);
}
