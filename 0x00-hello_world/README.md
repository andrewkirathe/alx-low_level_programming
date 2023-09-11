Answer is: gcc -E $CFILE -o c ..{Write a script that runs a C file through the preprocessor and save the result into another file.
The C file name will be saved in the variable $CFILE. The output should be saved in the file c}

Answer is: gcc -c $CFILE ..{Write a script that compiles a C file but does not link.The C file name will be saved in the variable $CFILE
The output file should be named the same as the C file, but with the extension .o instead of .c}

Answer is: gcc -S $CFILE ..{Write a script that generates the assembly code of a C code and save it in an output file.The C file name will be saved in the variable $CFILE.The output file should be named the same as the C file, but with the extension .s instead of .c}

Answer is: gcc $CFILE -o cisfun ..{Write a script that compiles a C file and creates an executable named cisfun.The C file name will be saved in the variable $CFILE}

Answer is:
#include<stdio.h>
/**
*main - Entrypoint
*
*Return: Always 0(correct)
*/
int main(void)
{
puts("\"Programming is like building a multilingingual puzzle");
return 0;
}
.. {Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. Use puts}

Answer is:
#include<stdio.h>
/**
*main - Entrypoint
*
*Return: Always 0(correct)
*/
int main(void)
{
printf("with proper grammar, but the outcome is a piece of art,\n");
return (0);
}
.. {Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,followed by a new line. Use printf}

Answer is:
#include<stdio.h>
/**
*main - Entrypoint
*
*Return: Always 0(correct)
*/
int main(void)
{
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
return (0);
}
.. {Write a C program that prints the size of various types on the computer it is compiled and run on.You should produce the exact same output as in the example
Warnings are allowed.Your program should return 0.}
