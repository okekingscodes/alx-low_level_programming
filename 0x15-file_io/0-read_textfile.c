#include "MAIN_H"

/**
 * read_textfile -> reads a text file and prints the letters
 * @filename: filename
 * #letters: numbers of letters to be printed
 * Return: numbers of letters printed. If fails, returns 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedesc;
	ssize_t nrd, nwr;
	char *but;

	if (!filename)
		return (0);
	filedesc = open(filename, O_RDONLY);

	if (filedesc == -1)
		return (0);

	but = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(filedesc, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(filedesc);

	free(buf);

	return (nwr);
}
