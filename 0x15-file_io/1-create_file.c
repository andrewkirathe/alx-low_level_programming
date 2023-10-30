#include "main.h"

/**
 * create_file – Creates a file.
 * @filename: A pointer to the name of the file created.
 * @text content: A pointer to a string to write to the file.
 *
 * return: If the function fails - -1.
 *          Otherwise - 1.
 */
Int create_file(const char *filename, char *text_content)
{       
        int fd, w, len = 0;

        if (filename == NULL)
                Return (-1);

        if (text_content != NULL)
        {
                 for (len = 0; text_content[len];)
                            Len ++;
        }
        
        fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
        w = write(fd, text_content, len);

        if (fd == -1 || w == -1)
                return (-1);
 
        close(fd);

        return (1);
}     
