/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ch4.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sunpark <sunpark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/04 22:29:56 by sunpark           #+#    #+#             */
/*   Updated: 2020/10/15 13:07:47 by sunpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	show_sky(int is_save)
{
	double		aspect_ratio;
	t_img_data	*img;
	t_sky_info	*info;

	aspect_ratio = 16.0 / 9.0;
	img = create_img_data(400, (int)(400 / aspect_ratio));
	info = init_sky_info(2.0 * aspect_ratio, 2.0, 1.0);
	draw_sky(img, info);
	if (is_save)
		save_bmp(img, "ch4.rt");
	else
		mlx_show(img, "Sky");
	free(info);
	free_img_data(img);
}
