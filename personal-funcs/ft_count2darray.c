/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count2darray.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrameau <jrameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/27 21:52:38 by jrameau           #+#    #+#             */
/*   Updated: 2017/07/02 17:56:03 by jrameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_count2darray(char **arr)
{
	int		i;
	int		count;

	i = -1;
	count = 0;
	while (arr[++i])
		count++;
	return (count);
}
