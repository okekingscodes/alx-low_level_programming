#include "MAIN_H"

/**
 * create_file -> create a file
 * @filename: filename described
 * @text_content: content written in the file
 *
 * Return: 1 if it success else -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int filedesc;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	filedesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filedesc == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;


	rwr = write(filedesc, text_content, nletters);

	if (rwr == -1)
		return (-1);

	close(filedesc);

	return (1);
}
