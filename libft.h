
#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str);
void	ft_bzero(void *str, size_t n);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_islower(int c);
int	ft_isspace(int c);
int	ft_isupper(int c);
char	*ft_itoa(int n);
void	*ft_memalloc(size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar(char c);
void	ft_putendl(char const *s);
char	*ft_itoa(int	n);
void	ft_putstr(const char *str);
char	*ft_strcat(char *dest, const char *src);
void	ft_strclr(char *s);
int	ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dest, const char *src);
int	ft_strequ(char const *s1, char const *s2);
void	ft_striter(char *s, void (*f)(char *));
void	ft_sriteri(char *s, void (*f)(unsigned int, char *));
size_t	ft_strlen(const char *str);
char	*ft_strncat(char *dest, const char *src, size_t n);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strncpy(char *dest, const char *src, size_t n);
int	ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strnew(size_t size);
int	ft_tolower(int c);
int	ft_toupper(int c);

#endif
