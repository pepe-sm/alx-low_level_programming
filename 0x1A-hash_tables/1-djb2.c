#include "hash_tables.h"

/**
 * hash_djb2 - converts a set of items into another based on the djb2 algorithm
 * @str: converts string of items to a hash value
 *
 * Return: hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

/*In essence, this function produces hash values for strings.
It accepts a string as input, which is what the parameter str denotes. An array of unsigned characters is what is anticipated for the string. A variable hash is initialized by the function to the value 5381. This number serves as the hash calculation's arbitrary beginning point. While utilizing a while loop, the function assigns each character from the input string to the variable c. Amazing!
*/
