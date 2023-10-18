#include "main.h"
/**
 * get_function - funtion choose.
 * @c: pointer char type.
 * Return: 0.
 */
int (*get_function(char c))(va_list a)
{
	int j;
	struct specifiers prn[] = {
		{"c", printf_char},
		{"s", printf_str},
		{"%", printf_porc},
		{"d", printf_digit},
		{"i", printf_digit},
		{"r", printf_reversed},
		{NULL, NULL}
	};
	for (j = 0; *prn[j].specifier != '\0'; j++)
	{
		if (prn[j].specifier[0] == c)
			return (prn[j].f);
	}
	return (NULL);
}
