#include "main.h"

/**
 * append_text_to_a_file – appends a text at line end.
 * @filename: A pointer to the name of the file created.
 * @text content: A pointer to a string to write to the file end.
 *
 * return: If the function fails or filename is NULL- -1.
 *          if the file does not exist the user lacks write permissions - -1.
 *          Otherwise - 1.
 */
Int append _text_to_file(const char *filename, char *text_content)
{       
        int o, w, len = 0;

        if (filename == NULL)
                return (-1);

        if (text_content != NULL)
        {
                 for (len = 0; text_content[len];)
                            Len ++;
        }
        
        o = open(filename, O_WRONLY | O_APPEND);
        w = write(o, text_content, len);

        if (o == -1 || w == -1)
                return (-1);
 
        close(o);

        return (1);
} 
