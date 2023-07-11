#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

typedef struct s_map
{
	int	n;
	int	m;
	int	maxi;
	int	maxj;
	int	max;
}	t_map;

void	ft_find_proportions(char **char_map,
			int *lenght, int *count);

char	*ft_file_to_str(char *pathname);

char	**ft_split(char *str);

char	**ft_get_map_from_file(char *pathname, t_map *bus);

int		ft_checkall(char **map, int n, int m, int k);

int		ft_checkmap(char **map);

int		ft_atoi(char *str);

int		ft_microatoi(char *str);

int		ft_str_is_printable(char *str);

int		ft_strlen(char *str);

void	ft_putstr(char *str);

void	ft_putchar(char c);

int		**ft_get_int_map(char **char_map);

int		ft_find_file_size(char *pathname);

char	*ft_get_input_map(void);

#endif
