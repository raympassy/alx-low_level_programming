#include <stdio.h>
#include"main.h"

/**
 * main - print the name ofthe program
 * @argc: count the arguments
 * @argv: arguments
 * Return: always 0
*/

int main(int argc, char *argv[])
{

/*Declaring variables*/
int  count = 0;

if (argc > 0)
{
/*WHILE - print each arguments*/
while (count <  argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
