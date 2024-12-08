#include "main.h"
/**
 * append_text_to_file - function
 * @filename: filename
 * @text_content: tet cont
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i;

	i = open(filename, O_APPEND);
	if (i == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
		write(i, text_content, strlen(text_content));
	close(i);
	return (1);
}
