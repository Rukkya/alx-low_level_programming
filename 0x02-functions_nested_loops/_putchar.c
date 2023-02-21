#include<unistd.h>
/*
 *putchar - writes the char c to stdout
 *@c: the character to print
 *Return: on success 1.
 *On error , -1 is returned , and error is set approbriatly
*/
int _putchar(char c)
{
        return (write(1,&c,1));
}
