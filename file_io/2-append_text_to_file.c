#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: const char*
 * @text_content: char*
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	unsigned int len, written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
	{
		close(o);
		return (-1);
	}

	for (len = 0; text_content[len]; len++)
		;

	written = write(o, text_content, len);
	close(o);

	return (written == len ? 1 : -1);
}
