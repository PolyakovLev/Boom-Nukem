/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebednar <ebednar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 18:38:09 by twitting          #+#    #+#             */
/*   Updated: 2019/03/07 15:03:01 by ebednar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "engine.h"

void	init(t_env *env)
{
    if (SDL_Init(SDL_INIT_VIDEO) < 0)
        ft_error(4);
    else
    {
        if (!(env->window = SDL_CreateWindow("Doom Nukem 2,5D", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WWIN, HWIN, SDL_WINDOW_ALLOW_HIGHDPI)))
			ft_error(4);
		env->surface = SDL_GetWindowSurface(env->window);
    }
}