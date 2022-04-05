#include "main.h"
/**
 * main - copy file
 * @argc: number of arguments
 * @argv: arguments given
 * Return: 0 if success and -1 if fails
 */
int main(int argc, char *argv[])
{
	int oRet2 = 0, oRet = 0, rRet = 0, wRet = 0, cRet = 0, cRet2 = 0;
	char text[1024];

	if (argc != 3)
	{
		write(STDERR_FILENO, "Usage: cp file_from file_to\n", 28);
		exit(97);
	}
	/*opens the first file*/
	oRet = open(argv[1], O_RDONLY);
	if (oRet < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	rRet = read(oRet, text, 1024);
	cRet = close(oRet);
	/*create the other file if already exist then truncate*/
	oRet2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (oRet2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	wRet = write(oRet, text, rRet);
	text[1024] = '\0';
	cRet2 = close(oRet2);
	if (cRet < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cRet);
		exit(100);
	}
	if (cRet2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cRet2);
		exit(100);
	}
	if (wRet == -1 || oRet == -1 || rRet == -1)
		return (-1);
	return (0);
}
