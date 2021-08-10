#include "main.h"
/**
 * append_text_to_file -This function appends text at the end of a file.
 * @filename: pointer.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
        /*O_WRONLY = Open for write-only.*/
        /*O_APPEND = Set the offset to EOF before each write.*/

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
