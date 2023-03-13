#include "main.h"

/**
 * *create_array - Creates an array of chars
 *
 * @size: unsigned int
 * @c: char
 * Return: A pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
  char *chars = malloc(sizeof(char) * size);
  unsigned int i = 0;

  if (size == 0 || chars == NULL)
    return (NULL);

  for (; i < size; i++)
    chars[i] = c;

  return (chars);
}
