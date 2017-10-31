/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgerard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 16:39:03 by dgerard           #+#    #+#             */
/*   Updated: 2017/10/24 16:39:08 by dgerard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "listen.h"

int				main(void)
{
//	bool	run;
//	char	*line;

//	run = true;
//	line = NULL;
//	while (run == true)
	{
		system("pocketsphinx_continuous -inmic yes -logfn /dev/null\
			-lm support/9005.lm -dict support/9005.dic");
			// -inmic yes : listen through mic input
			// -logfn /dev/null : silence log output onto terminal
//		get_next_line(1, &line);
//		printf("program output: %s\n", line);
//		if (line == "poop")
//			break;
	}
//	ft_memdel((void**)&line);
}
