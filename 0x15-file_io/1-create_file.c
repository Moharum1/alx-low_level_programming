#include "main.h"
#include <stddef.h>
#include <string.h>

/**
  * create_file - a function that creates a file.
  * @filename: A pointer to a file to be created.
  * @text_content: strings in a file.
  * Return: if file name is NULL or cant be create even witten - -1
  *         Otherwise - 1 on success.
  */
int create_file(const char *filename, char *text_content)
{
	ssize_t fp;
	ssize_t content,w;
	int len;
	char *text;

	if (filename == NULL)
		return (-1);

	len = strlen(text_content);

	fp = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);
	
	if (!fp)
		return (0);

	w = write(STDOUT_FILENO, text_content, len);
	
	if (fp == -1 || w == -1)
		return (-1);

	close(fp);

	return (w);
}
