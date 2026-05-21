/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sliang <sliang@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/05/01 16:49:18 by sliang        #+#    #+#                 */
/*   Updated: 2026/05/20 12:48:57 by shiyuan       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

# include <ctype.h> //just for testing purpose, will be removed later
# include <stdio.h>  //just for testing purpose, will be removed later
# include <stdlib.h> //just for testing purpose, will be removed later
# include <string.h>
# include <stddef.h>
# include <unistd.h>
# include <stdint.h>

//pass input
t_list	*make_list(int argc, char *argv[]);
float	compute_disorder(t_list *stack_a);

//flag struct
typedef struct s_flag
{
	int		flag_num;
	char	*algorithm;
	char	*bench;
} t_flag;

//operation struct

//algorithms struct

#endif