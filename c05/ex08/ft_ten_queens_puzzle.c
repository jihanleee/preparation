/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihanleee <sbll22006@naver.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:26:24 by jihanleee         #+#    #+#             */
/*   Updated: 2023/01/04 13:28:50 by jihanleee        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putposition(int *position)
{
	int		i;
	char	c[11];

	i = 0;
	while (i <= 9)
	{
		c[i] = position[i] + '0';
		i++;
	}
	c[10] = 10;
	write(1, c, 11);
}

/* if return value is 1, it is possible to put a queen on the location.
 * if return value is 0, it is not possble to put a queen on the location.
 */
int	ft_is_possible(int depth, int *position, int *used, int row)
{
	int	i;

	if (used[row] == 1)
		return (0);
	i = 1;
	depth--;
	while (depth >= 0)
	{
		if (position[depth] == row - i)
			return (0);
		if (position[depth] == row + i)
			return (0);
		i++;
		depth--;
	}
	return (1);
}

/* 'depth' is the value of current depth of ft_dfs function.
 * '*position' is the pointer of 'position' array. position[n] is the row
 *  on which the queen is placed in nth column of the chess board.
 *  '*used' is a pointer of used array.
 *  if used[row] == 1, it means that nth row of
 *  the chessboard is already occupied by a queen.
 *  '*pcount' is the pointer of count.
 *  ft_dfs increaments 'count' of ft_ten_queens_puzzle via '*pcount'
 *  to count the number of all the possible solutions.
 */
void	ft_dfs(int depth, int *position, int *used)
{
	int	row;

	if (depth == 10)
	{
		ft_putposition(position);
		position[10]++;
		return ;
	}
	row = 0;
	while (row <= 9)
	{
		if (ft_is_possible(depth, position, used, row))
		{
			position[depth] = row;
			used[row] = 1;
			ft_dfs(depth + 1, position, used);
			used[row] = 0;
		}
		row++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	used[10];
	int	position[11];
	int	count;
	int	i;

	i = 0;
	while (i <= 9)
	{
		position[i] = -1;
		used[i] = 0;
		i++;
	}
	count = 0;
	position[10] = count;
	ft_dfs(0, position, used);
	count = position[10];
	return (count);
}
