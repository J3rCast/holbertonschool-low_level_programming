#include "main.h"
/**
 * read_textfile - reads a text and prints it to the stout
 * @filename: is the name of the created file
 * @letters: is the number of letters it should read and print
 * Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int bNum = 0;
	char *text;

	if (filename == NULL)
		return (0);

	text = malloc(letters);
	if (text == NULL)
		return (0);

	fd = open(filename, O_RDONLY); /* first open the file */

	bNum = read(fd, text, letters); /* then read the content of the file */
	if (bNum == -1)
		return (0);

	close(fd);

	text[letters] = '\0';


	fd = write(1, text, letters); /* and finally writte it  in stdout*/

	close(fd);

	free(text); /* free the buffer */

	return (bNum);
}
