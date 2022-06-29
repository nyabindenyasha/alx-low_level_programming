#include "main.h"
#include <stdlib.h>

/**
 * free_everything - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 */

void free_everything(char **string, int i)
{
	for (; i > 0;)
		free(string[--i]);
	free(string);
}
