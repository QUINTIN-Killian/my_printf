/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** Header for my_printf files
** my_printf
*/

#include <stdarg.h>

#ifndef MY_PRINTF_H_
    #define MY_PRINTF_H_

//root :
int my_printf(const char *restrict format, ...);
int is_right_typo(const char *restrict format);

//flags file :
int is_percent(char c, va_list args, int *count, char *atribute_char);
int is_c(char c, va_list args, int *count, char *atribute_char);
int is_d(char c, va_list args, int *count, char *atribute_char);
int is_i(char c, va_list args, int *count, char *atribute_char);
int is_s(char c, va_list args, int *count, char *atribute_char);
int is_u(char c, va_list args, int *count, char *atribute_char);
int is_x(char c, va_list args, int *count, char *atribute_char);
int is_x_maj(char c, va_list args, int *count, char *atribute_char);
int is_o(char c, va_list args, int *count, char *atribute_char);
int is_e(char c, va_list args, int *count, char *atribute_char);
int is_p(char c, va_list args, int *count, char *atribute_char);
int is_n(char c, va_list args, int *count, char *atribute_char);
int is_f(char c, va_list args, int *count, char *atribute_char);

//atribute_char file :
char is_hashtag(const char *restrict format, int *ind);
char is_zero(const char *restrict format, int *ind);
char is_minus(const char *restrict format, int *ind);
char is_space(const char *restrict format, int *ind);
char is_plus(const char *restrict format, int *ind);

#endif
