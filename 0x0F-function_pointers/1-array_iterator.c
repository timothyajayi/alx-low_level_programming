#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator -to iterates an array
 * @array: the array
 * @size: the size
 * @action: poiter to function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
