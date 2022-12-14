/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changhle <changhle@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:28:16 by ljeongin          #+#    #+#             */
/*   Updated: 2022/09/30 19:16:22 by changhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#include "minishell.h"

int	ft_pwd(void)
{
	char	*cur_path;

	cur_path = getcwd(NULL, 0);
	printf("%s\n", cur_path);
	free(cur_path);
	return (0);
}
