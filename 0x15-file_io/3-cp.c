#include "main.h"
#include "stdio.h"
#include "stdlib.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer – allocates 1024 bytes to a buffer.
 * @file: A buffer name of the chars storage.
 *
 * return: A pointer to the newly allocated buffer.
 */
char *create_buffer(char *file)
{       
        char *buffer;

        buffer = malloc(sizeof(char) *1024
                
        if (buffer == NULL)
        {
                 dprintf(STDERR_FILENO, “Error: Cannot write to %s\n”, file);
                 exit(99);
        }
        
        return (buffer);
}

/**
* close_file – closes file descriptors.
* @fd: the file descriptor to be closed.
*/
Void close_file(int fd)
{
        int c;

        c = close(fd);

        if (c == -1)
        {
                 dprintf(STDERR_FILENO, “Error: Cannot close fd %d\n”, fd);
                 exit(100);
        }
}

/**
* main – copies file contents to another file.
* @argc: number of arguments supplied 
* @argv: Array of pointers to arguments.
*
* return: 0 on success.
*
* description: incorrect argument count – exit code 97.
* if file_from does not exist or unreadable – exit code 98.
* if file_to cant be written to or uncreatable – exit code 99.
* if file_from or file_to is unclosable – exit code 100.
*/
int main(int argc, char *argv[])
{
        int from, to, r, w;
        char *buffer;

        if (argc !=3)
        {
                 dprintf(STDERR_FILENO, “usage: cp file_from file_to\n”);
                 exit(97);
        }
     
        buffer = create_buffer(agrv[2]);
        from = open(argv[1], O_RDONLY);
        r = read(from, buffer, 1024);
        to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

        do {
                if (from == -1 || r == -1)
                {
                dprintf(STDERR_FILENO, “Error: Cannot read from file %s\n”, argv[1]);
                free(buffer);
                exit(98);
                }

                w = write(to, buffer, r);
                if (to == -1 || w == -1)
                {
                dprintf(STDERR_FILENO, “Error: Cannot write to %s\n”, argv[2]);
                free(buffer);
                exit(99);
                }
                 r = read(from, buffer, 1024);
                 to = open(argv[2], O_WRONLY | O_APPEND);
        } while (r > 0);
        
         free(buffer);
         close_file(from);
         close_file(to);

         return (0);
}  
