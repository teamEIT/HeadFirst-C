/*
 *
 *
 */
#include <stdio.h>

int larger(int a, int b)
{
	if (a > b)
	{
		return a;	
	}
	return b;
}

int main(int argc, char const *argv[])
{
	int greatest = larger(100, 120);
	printf("%i is the greatest !\n", greatest); 
	return 0;
}