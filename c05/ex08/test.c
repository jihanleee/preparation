#include <unistd.h>

void	ft_putint(int *used)
{
	int i;
	char c[10];
	i = 0;
	while (i <= 9)
	{
		char[i] = used[i] + '0';
	}
	write(1, c, 10);
}

int	ft_check(int location, int *index, int depth, int *used)
{
	int	diagonal_up;
	int	diagonal_down;
	int	row;
	int	i;

	i = 0;
	while (i 
}

int	ft_ten_queens_puzzle(void)
{
	int used[10];
	int position[10];
	int count;
	int *pcount;
	int i;

	pcount = &count
	i = 0;
	while(i < 10)
	{
		used[i] = 0;
		i++;
	}
	count = 0;
	ft_dfs(0, index, used, pcount);
	return (count);
}

/* 'depth' is the value of current depth of ft_dfs function.
 * '*position' is the pointer of 'position' array. position[n] is the location
 *  of the queen on nth column of the chess board.
 *  '*used' is a pointer of used array.
 *  if used[n] == 1, it means that nth row of the chessboard is already occupied by a queen.
 */
void	ft_dfs(int depth, int *position, int *used, int *pcount)
{
	int i;

	if (depth == 10)
	{
		ft_putint(used);
		*count++;
		return;
	}
	i = 0;
	while (i < 10)
	{
		if (ft_check(i, depth, used))
		{
			index[depth] = i;
			used[i] = 1;
			ft_dfs(depth + 1, index, used, pcount);
			used[i] = 0;
		}
		i++;
	}
}

int	main()
{
	char test[10] = "1234567890";

	ft_putstr(test);
	return 0;
}
