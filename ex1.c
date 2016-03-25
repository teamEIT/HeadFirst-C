/* Two types of command
 *
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char cardName[3];
	puts("Enter the cardName: ");
	scanf("%2s", cardName);
	int val;
	if(cardName[0] == 'K') 
	{
		val = 10;
	} else if(cardName[0] == 'Q') 
	{
		val = 10;
	} else if(cardName[0] == 'J') 
	{
		val = 10;
	} else if(cardName[0] == 'A') 
	{
		val = 11;
	} else 
	{
		val = atoi(cardName);
	}
	/* Check if the value is 3 to 6 */
	if ((val > 2) && (val < 7))
	{
		puts("Count has gone up");
	} else if (val == 10) // Otherwise check if the card was 10, J, Q, K
	{
		puts("Count has gone down");
	}
	printf("The card value is : %i\n", val);
	return 0;
}