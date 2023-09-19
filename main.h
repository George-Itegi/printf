#ifnctdef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/**
 * struct formt - Struct op
 *
 * @formt: The format.
 * @fnct: The function associated.
 */
struct formt
{
	char formt;
	int (*fnct)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct formt formt_t - Struct op
 *
 * @formt: The format.
 * @fnc_t: The function associated.
 */
typedef struct formt formt_t;

int _printf(const char *format, ...);
int handle_print(const char *formt, int *i,
va_list list, char buffer[], int flags, int width, int precision, int size);

/****************** FUNCTIONS ******************/

/* Print chars and strings */
int print_char(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_strings(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_percents(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Print numbers*/
int print_int(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_binaries(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_unsigned(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_octals(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexadecimals(va_list types, char buffer[],
	int flags, int width, int precision, int size);
int print_hexad_upper(va_list types, char buffer[],
	int flags, int width, int precision, int size);

int print_hexad(va_list types, char map_to[],
char buffer[], int flags, char flag_ch, int width, int precision, int size);

/* Print non-printable characters*/
int print_non_printables(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Print memory address */
int print_pointers(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* Handle other specifiers */
int get_flags(const char *format, int *i);
int get_width(const char *format, int *i, va_list list);
int get_precision(const char *format, int *i, va_list list);
int get_size(const char *format, int *i);

/*Print string in reverse*/
int print_reverse(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/*Print a string in rot 13*/
int print_rot13string(va_list types, char buffer[],
	int flags, int width, int precision, int size);

/* width handler */
int handle_write_char(char c, char buffer[],
	int flags, int width, int precision, int size);
int write_numbers(int is_positive, int ind, char buffer[],
	int flags, int width, int precision, int size);
int write_numb(int ind, char bff[], int flags, int width, int precision,
	int length, char padd, char extra_c);
int write_pointers(char buffer[], int ind, int length,
	int width, int flags, char padd, char extra_c, int padd_start);

int write_unsignd(int is_negative, int ind,
char buffer[],
	int flags, int width, int precision, int size);

/****************** UTILS ******************/
int is_printable(char);
int append_hexad_code(char, char[], int);
int is_digit(char);

long int convert_size_numbers(long int num, int size);
long int convert_size_unsignd(unsigned long int num, int size);

#endif /* MAIN_H */
