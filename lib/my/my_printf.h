/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Header for my_printf files
** my_printf
*/

#include <stdarg.h>
#include <stddef.h>
#include <inttypes.h>

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_

//root :
int my_printf(const char *restrict format, ...);
void no_flag(const char *restrict format, int *ind, int *count);

//flags file :
int is_percent(const char *restrict format, int *ind,
    va_list args, int *count);
int is_c(const char *restrict format, int *ind,
    va_list args, int *count);
int is_d(const char *restrict format, int *ind,
    va_list args, int *count);
int is_i(const char *restrict format, int *ind,
    va_list args, int *count);
int is_s(const char *restrict format, int *ind,
    va_list args, int *count);
int is_u(const char *restrict format, int *ind,
    va_list args, int *count);
int is_x(const char *restrict format, int *ind,
    va_list args, int *count);
int is_x_maj(const char *restrict format, int *ind,
    va_list args, int *count);
int is_o(const char *restrict format, int *ind,
    va_list args, int *count);
int is_e(const char *restrict format, int *ind,
    va_list args, int *count);
int is_e_maj(const char *restrict format, int *ind,
    va_list args, int *count);
int is_p(const char *restrict format, int *ind,
    va_list args, int *count);
int is_n(const char *restrict format, int *ind,
    va_list args, int *count);
int is_f(const char *restrict format, int *ind,
    va_list args, int *count);
int is_g(const char *restrict format, int *ind,
    va_list args, int *count);
int is_b(const char *restrict format, int *ind,
    va_list args, int *count);

//atribute_char file :
int is_atribute_char(char c);
void atribute_char_no_correct_flag_found(const char *restrict format,
    int *ind, char *str, int *count);
char *get_atribute_char_flags(const char *restrict format,
    int *ind, char *str);
char is_hashtag(const char *restrict format, int my_ind);
char is_zero(const char *restrict format, int my_ind);
char is_minus(const char *restrict format, int my_ind);
char is_space(const char *restrict format, int my_ind);
char is_plus(const char *restrict format, int my_ind);
int atribute_char_on_a(const char *restrict format, int *ind,
    int *count, double nbr);
int atribute_char_on_d(const char *restrict format, int *ind,
    int *count, int nbr);
int atribute_char_on_e(const char *restrict format, int *ind,
    int *count, double nbr);
int atribute_char_on_e_maj(const char *restrict format, int *ind,
    int *count, double nbr);
int atribute_char_on_f_f_maj(const char *restrict format, int *ind,
    int *count, double nbr);
int atribute_char_on_i(const char *restrict format, int *ind,
    int *count, int nbr);
int atribute_char_on_g_g_maj(const char *restrict format, int *ind,
    int *count, double nbr);
int atribute_char_on_i(const char *restrict format, int *ind,
    int *count, int nbr);
int atribute_char_on_o(const char *restrict format, int *ind,
    int *count, unsigned int nbr);
int atribute_char_on_x(const char *restrict format, int *ind,
    int *count, unsigned int nbr);
int atribute_char_on_x_maj(const char *restrict format, int *ind,
    int *count, unsigned int nbr);

//precision file :
int is_precision(char c);
int get_precision(const char *restrict format, int *ind);

//length_modifier :
int get_length_modifier(const char *restrict format,
    int *ind, char *str);
int is_length_modifier(char c);
int is_hh(const char *restrict format, int *ind, char *str);
int is_h(const char *restrict format, int *ind, char *str);
int is_l(const char *restrict format, int *ind, char *str);
int is_ll(const char *restrict format, int *ind, char *str);
int is_q(const char *restrict format, int *ind, char *str);
int is_l_maj(const char *restrict format, int *ind, char *str);
int is_j(const char *restrict format, int *ind, char *str);
int is_z(const char *restrict format, int *ind, char *str);
int is_z_maj(const char *restrict format, int *ind, char *str);
int is_t(const char *restrict format, int *ind, char *str);

int length_modifier_on_d(const char *restrict format, int *ind,
    va_list args, int *count);
int hh_on_d(signed char c, int *count, char *atribute_char);
int h_on_d(short c, int *count, char *atribute_char);
int l_on_d(long c, int *count, char *atribute_char);
int ll_on_d(long long c, int *count, char *atribute_char);
int j_on_d(intmax_t c, int *count, char *atribute_char);
int z_on_d(size_t c, int *count, char *atribute_char);
int t_on_d(ptrdiff_t c, int *count, char *atribute_char);

int length_modifier_on_i(const char *restrict format, int *ind,
    va_list args, int *count);
int hh_on_i(signed char c, int *count, char *atribute_char);
int h_on_i(short c, int *count, char *atribute_char);
int l_on_i(long c, int *count, char *atribute_char);
int ll_on_i(long long c, int *count, char *atribute_char);
int j_on_i(intmax_t c, int *count, char *atribute_char);
int z_on_i(size_t c, int *count, char *atribute_char);
int t_on_i(ptrdiff_t c, int *count, char *atribute_char);

int length_modifier_on_o(const char *restrict format, int *ind,
    va_list args, int *count);
int hh_on_o(unsigned char c, int *count, char *atribute_char);
int h_on_o(unsigned short c, int *count, char *atribute_char);
int l_on_o(unsigned long c, int *count, char *atribute_char);
int ll_on_o(unsigned long long c, int *count, char *atribute_char);
int j_on_o(uintmax_t c, int *count, char *atribute_char);
int z_on_o(size_t c, int *count, char *atribute_char);
int t_on_o(ptrdiff_t c, int *count, char *atribute_char);

int length_modifier_on_u(const char *restrict format, int *ind,
    va_list args, int *count);
int hh_on_u(unsigned char c, int *count);
int h_on_u(unsigned short c, int *count);
int l_on_u(unsigned long c, int *count);
int ll_on_u(unsigned long long c, int *count);
int j_on_u(uintmax_t c, int *count);
int z_on_u(size_t c, int *count);
int t_on_u(ptrdiff_t c, int *count);

int length_modifier_on_x(const char *restrict format, int *ind,
    va_list args, int *count);
int hh_on_x(unsigned char c, int *count, char *atribute_char);
int h_on_x(unsigned short c, int *count, char *atribute_char);
int l_on_x(unsigned long c, int *count, char *atribute_char);
int ll_on_x(unsigned long long c, int *count, char *atribute_char);
int j_on_x(uintmax_t c, int *count, char *atribute_char);
int z_on_x(size_t c, int *count, char *atribute_char);
int t_on_x(ptrdiff_t c, int *count, char *atribute_char);

int length_modifier_on_x_maj(const char *restrict format, int *ind,
    va_list args, int *count);
int hh_on_x_maj(unsigned char c, int *count, char *atribute_char);
int h_on_x_maj(unsigned short c, int *count, char *atribute_char);
int l_on_x_maj(unsigned long c, int *count, char *atribute_char);
int ll_on_x_maj(unsigned long long c, int *count, char *atribute_char);
int j_on_x_maj(uintmax_t c, int *count, char *atribute_char);
int z_on_x_maj(size_t c, int *count, char *atribute_char);
int t_on_x_maj(ptrdiff_t c, int *count, char *atribute_char);

#endif
