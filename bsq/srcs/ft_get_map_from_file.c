#include "../includes/ft.h"

char	**ft_get_map_from_file(char *pathname, t_map *bus)
{
	char	**map;

	map = ft_split(ft_file_to_str(pathname));
	if (map != NULL)
		ft_find_proportions(map, &bus->m, &bus->n);
	bus->n -= 1;
	return (map);
}
