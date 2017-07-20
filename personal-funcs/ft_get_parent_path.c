/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_parent_path.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jrameau <jrameau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 16:43:14 by jrameau           #+#    #+#             */
/*   Updated: 2017/07/02 17:56:28 by jrameau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_get_parent_path(char *path)
{
	char	*last_slash;
	char	*parent;

	last_slash = strrchr(path, '/');
	parent = strndup(path, last_slash - path);
	return (parent);
}
