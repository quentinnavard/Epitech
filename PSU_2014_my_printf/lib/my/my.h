/*
** my.h for libmy in /home/dupard_e/rendu/Piscine_C_match-nmatch
** 
** Made by Erwan Dupard
** Login   <dupard_e@epitech.net>
** 
** Started on  Wed Oct  8 14:36:08 2014 Erwan Dupard
** Last update Fri Nov 14 16:35:28 2014 Erwan Dupard
*/

#ifndef MY_H_
# define MY_H_

void		my_putchar(char c);
int		my_getnbr(char *str);
int		my_isneg(int nb);
int		my_put_nbr(int nb);
int		my_swap(int *a, int *b);
int		my_putstr(char *str);
int		my_strlen(char *str);
int		my_getnbr(char *str);
void		my_sort_int_tab(int *tab, int size);
int		my_power_rec(int nb, int power);
int		my_square_root(int nb);
int		my_is_prime(int nombre);
int		my_find_prime_sup(int nb);
char		*my_strcpy(char *dest, char *src);
char		*my_strncpy(char *dest, char *src, int nb);
char		*my_revstr(char *str);
char		*my_strstr(char *str, char *to_find);
int		my_strcmp(char *s1, char *s2);
int		my_strncmp(char *s1, char *s2, int nb);
char		*my_strupcase(char *str);
char		*my_strlowcase(char *str);
char		*my_strcapitalize(char *str);
int		my_str_isalpha(char *str);
int		my_str_isnum(char *str);
int		my_str_islower(char *str);
int		my_str_isupper(char *str);
int		my_str_isprintable(char *str);
int		is_printable_char(char c);
int		my_showstr(char *str);
int		my_showmem(char *str, int size);
char		*my_strcat(char *dest, char *src);
char		*my_strncat(char *dest, char *src, int nb);
int		my_atoi(char *nptr);
int		my_getnbr_base(char *base_from, char *nbr);
int		convert__base(char *base_from, char *nbr, char *base_to);
char		*my_epurstr(char *str);
int		my_putnbr_base(int n, char *base);
int		my_putnbr_base_addr(unsigned long n, char *base);
int		my_putnbr_base_unsigned(unsigned int n, char *base);
int		my_putnbr_unsigned(unsigned int n);
int		my_printf(const char *format, ...);

#endif	/* !_MY_H_ */
