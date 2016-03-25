#include <stdio.h>
int main()
{
	int card = 1;
	if (card > 1) 
	{
		card = card - 1;
		if (card < 7)
			puts("Small card");
	}
		else
			puts("Ace!");
	/*
	int card = 1;
	if (card > 1) 
	{
		card = card - 1;
		if (card < 7)
			puts("Small card");
		else
			puts("Ace!");
	}
	return 0;
	*/
	/*
	int card = 1;
	if (card > 1) 
		card = card - 1;
	if (card < 7)
		puts("Small card");
	else
		puts("Ace!");
	return 0;
	*/
	return 0;
}