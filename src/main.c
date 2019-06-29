#include "libft.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_dprintf(2, "usage: %s <filename>\n", argv[0]);
		return (1);
	}
	return (0);
}
