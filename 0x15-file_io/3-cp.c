#include "main.h"
void closeFd(int fd)
{
	int i;

	i = close(fd);
	if (i < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		exit(100);
	}
}
/**
 * main - copy file
 * @argc: number of arguments
 * @argv: arguments given
 * Return: 0 if success and -1 if fails
 */
int main(int argc, char *argv[])
{
	int oRet2 = 0, oRet = 0, rRet = 0, wRet = 0;
	char *text;

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	text = malloc(sizeof(char) * 1024);
	oRet = open(argv[1], O_RDONLY | O_APEND);
	if (oRet < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(text);
		exit(98);
	}
	rRet = read(oRet, text, 1024);
	oRet2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (oRet2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(text);
		exit(99);
	}
	wRet = write(oRet, text, rRet);
	text[1024] = '\0';
	if (wRet == -1 || oRet == -1 || rRet == -1)
	{
		free(text);
		return (-1);
	}
	closeFd(oRet2);
	closeFd(oRet);
	free(text);
	return (0);
}