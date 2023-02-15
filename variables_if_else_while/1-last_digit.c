#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
/* more headers goes there */

char *concat(const char*, const char*);

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int nLastDigit;
	char *text;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	nLastDigit = n % 10;

	text = "Last digit of %d is %d ";
	if(nLastDigit > 5)
	{
		text = concat( text, "and is greater than 5" );
	}
	else if( nLastDigit == 0 )
	{
		text = concat( text, "and is 0" );
	}
	else if( nLastDigit < 6 )
	{
		text = concat( text, "and is less than 6 and not 0" );
	}
	text = concat( text, "\n" );

	printf( text, n, nLastDigit );

	return (0);
}

char* concat(const char *s1, const char *s2)
{
    char *result = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(result, s1);
    strcat(result, s2);
    return (result);
}
