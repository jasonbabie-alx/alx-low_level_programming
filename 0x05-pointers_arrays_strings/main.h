#ifndef MAIN_H
#define MAIN_H

/* _putchar - writes the character c to stdout */
int _putchar(char c);

/* reset_to_98 - takes a pointer to an int as parameter and updates the value it points to to 98 */
void reset_to_98(int *n);

/* swap_int - swaps the values of two integers */
void swap_int(int *a, int *b);

/* _strlen - returns the length of a string */
int _strlen(char *s);

/* _puts - prints a string, followed by a new line, to stdout */
void _puts(char *str);

/* print_rev - prints a string, in reverse, followed by a new line */
void print_rev(char *s);

/* rev_string - reverses a string */
void rev_string(char *s);

/* puts2 - prints every other character of a string, starting with the first character, followed by a new line */
void puts2(char *str);

/* puts_half - prints half of a string, followed by a new line */
void puts_half(char *str);

/* print_array - prints n elements of an array of integers, followed by a new line */
void print_array(int *a, int n);

/* _strcpy - copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest */
char *_strcpy(char *dest, char *src);

/* _atoi - converts a string to an integer */
int _atoi(char *s);

/* print_most_numbers - prints the numbers from 0 to 9, except 2 and 4, followed by a new line */
void print_most_numbers(void);

/* more_numbers - prints 10 times the numbers from 0 to 14, followed by a new line */
void more_numbers(void);

/* print_line - draws a straight line in the terminal */
void print_line(int n);

/* print_diagonal - draws a diagonal line in the terminal */
void print_diagonal(int n);

/* print_square - prints a square, followed by a new line */
void print_square(int size);

/* print_triangle - prints a triangle, followed by a new line */
void print_triangle(int size);

/* positive_or_negative - determines if a number is positive, negative, or zero */
void positive_or_negative(int i);

/* largest_number - returns the largest of 3 numbers */
int largest_number(int a, int b, int c);

/* print_remaining_days - converts a date to the day of year and determines how many days are left in the year */
void print_remaining_days(int month, int day, int year);

#endif /* MAIN_H */

