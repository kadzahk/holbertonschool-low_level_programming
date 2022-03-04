#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * num_checker - checks if a given char is number or not
 * @a: char to be checked
 * Return: 1, if its a number, else 0
 **/
int num_checker(char *a)
{
	int x, num, l;

	x = 0;
	num = 0;
	l = strlen(a);
	while (x < l)
	{
		if (a[x] < '0' || a[x] > '9')
		{
			return (-1);
		}
		else
			num = num * 10 + (a[x] - '0');
		x++;
	}
	return (num);
}
/**
 * main - add positive numbers
 * @argc: arguement count
 * @argv: array of pointers to arguement strings
 * Return: result of addition or 1
 **/
int main(int argc, char *argv[])
{
	int x, num, sum;

	sum = 0;
	for (x = 1; x < argc; x++)
	{
		num = num_checker(argv[x]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
