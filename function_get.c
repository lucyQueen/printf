#include "main.h"

/**
 * function_get - look for the specifier
 * 
 *
 */
int (*function_get(char x))(va_list args)
{
	int i = 0;
	spec arr[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	while (arr[i].valid)
	{
		if (x == arr[i].valid[0])
			return (arr[i].f);
		i++;
	}
	return (NULL);
}
