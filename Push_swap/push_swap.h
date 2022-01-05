/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojung <sojung@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:39:44 by sojung            #+#    #+#             */
/*   Updated: 2022/01/05 18:05:43 by sojung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

/*typedef struct s_list
{
	struct s_list	*prev;
	int				value;
	struct s_list	*next;
}	t_list

struct s_info
{
	int	list_size;
	s_list	*first;
	s_list	*last;
}*/

struct s_info
{
	static int	stack_size;
	int	top_a;
	int	top_b;
}

#endif
