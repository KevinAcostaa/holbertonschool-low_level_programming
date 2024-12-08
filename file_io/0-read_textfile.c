#include "main.h"
/**
 * read_textfile - function
 * @filename: file
 * @letters: letters
 * Return: count
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i = 0, count = 0;
	char *buff;

	i = open(filename, O_RDONLY);
	if (i == -1)
	{
		return (0);
	}
	buff = malloc(letters);
	if (buff == NULL)
	{
		return (0);
	}
	count = read(i, buff, letters);
	count = write(STDOUT_FILENO, buff, count);
	close(i);
	free(buff);
	return (count);
}
