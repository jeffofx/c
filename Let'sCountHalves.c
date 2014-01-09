#include <stdio.h>

main ()
{
	printf ("hello, future.\nThis is a set of experiments.\n");
	printf ("Let's count to 13 from zero, in increments of 0.5.\n");

	float start, stop, change;

	start = 0;
	stop = 13;
	change = 0.5;

	while (start <= stop) 
		{
		printf("%d\n", start);
		start = start+change;
		}
	
;
}