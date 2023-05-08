#include "main.h"
#include <stddef.h>

/*
 * read_textfile - a function used to read and print the content of a txt file
 * @filename: name of the file
 * @letters : no of char in the file 
 *
 * Return: the actual number of letter it could read or print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fp;
	ssize_t content,w;

	char *text;

	if (filename == NULL)
		return (0);

	fp = open(filename,O_RDONLY);
	if (!fp)
		return (0);

	text = malloc(sizeof(char) * letters);
	content = read(fp, text, letters);
	w = write(STDOUT_FILENO, text, content);

	free(text);
	close(fp);

	return (w);
}
