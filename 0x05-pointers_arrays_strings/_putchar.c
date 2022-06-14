#include "main.h"

#include <unistd.h>

/**
 *
 *  * main - print _putchar
 *
 *   * Return: 0 sucess
 *
 *    */

int _putchar(char c)

{

		return (write(1, &c, 1))

}
