#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	funone(char *indict, char *argv, char *temp, char *rank);
void	funtwo(char *indict, char *argv, char *temp, char *rank);
void	funthree(char *indict, char *argv, char *temp, char *rank);
int		funn(char *indict, char *argv, char *temp, char *rank);
void	fun(char *indict, char *argv);
void	lowhund(char *indict, char *argv, int k);
void	lowhundd(char *indict, char *argv, int k);
void	lowthous(char *indict, char *argv, int k);
void	ft_start(char *argv, int fd, char *indict);
void	ft_alt_start(char *argv, int fd, char *indict);
void	ft_stdin(int fd, char *indict);
void	ft_print(char *end, int k);
char	*ft_charinstr(char *str);
char	*ft_strchar(char *str, char to_find);
char	*ft_strread(char *buffer);
char	*ft_strstr(char *str, char *to_find);
char	*ft_onestrstr(char *str, char *to_find);
char	*ft_nstr(char *str, char *to_find);
int		ft_isspaceM(char c);
int		ft_isspaceN(char c);
int		ft_isspace(char c);
int		ft_str_is_numeric(char *str);
int		ft_char_is_alpha(char c);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_atoi(char *str);

#endif
