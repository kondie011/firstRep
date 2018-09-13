/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3i.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knedzing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 09:25:17 by knedzing          #+#    #+#             */
/*   Updated: 2018/09/04 09:25:35 by knedzing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vec3i	vec3i(t_vec3 v)
{
	t_vec3i vi;

	vi = (t_vec3i) { (int)v.x, (int)v.y, (int)v.z };
	return (vi);
}
